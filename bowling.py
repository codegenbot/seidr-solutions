def solve(input_string):
    score = 0
    i = 0
    frames = input_string.split()
    for frame in frames:
        if frame == "X":
            score += 10
            i += 1
        elif "/" in frame:
            parts = frame.split("/")
            strike = False
            total_pins = 0
            if len(parts) > 1 and parts[0] == 'X':
                strike = True
                total_pins += 15 if i < 9 else 10
            for part in parts:
                if part.isdigit():
                    total_pins += int(part)
                elif part == "X":
                    total_pins += 10
                    i += 1
            score += total_pins
        else:
            if frame.isdigit():
                score += sum(int(x) for x in frame)
            else:
                parts = frame.split('-')
                total_pins = 0
                for part in parts:
                    total_pins += int(part)
                score += total_pins + (10 - i) if len(parts) > 1 else total_pins
            i += 1

    print(score)

input_string = input("Enter the individual bowls: ")
solve(input_string)