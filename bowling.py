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
            if len(parts) > 1 and parts[0] == 'X':
                strike = True
            total_pins = 0
            for part in parts:
                if strike:
                    break
                if part.isdigit():
                    total_pins += int(part)
                else:
                    total_pins += 10
            score += total_pins
            i += 1
        else:
            if frame.isdigit():
                score += sum(int(x) for x in frame)
            else:
                parts = frame.split('-')
                total_pins = 0
                for part in parts:
                    total_pins += int(part)
                score += total_pins
            i += 1
    print(score)

input_string = input("Enter the individual bowls: ")
solve(input_string)