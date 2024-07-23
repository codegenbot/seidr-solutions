def solve(input_string):
    score = 0
    i = 0
    for frame in input_string.split():
        if frame == "X":
            score += 10
            i += 1
        elif "/" in frame:
            parts = frame.split("/")
            if len(parts) > 1 and parts[0] == 'X':
                score += 10 + sum(map(int, parts[1].split()))
            else:
                if len(parts) == 2:  
                    total_pins = int(parts[0]) + int(parts[1])
                    score += total_pins
                else:
                    pass
            i += 1
        else:
            if frame.isdigit():
                score += int(frame)
            else:
                total_pins = 0
                for part in frame.split('-'):
                    total_pins += int(part)
                score += total_pins
            i += 1

    print(score)

input_string = input("Enter the individual bowls: ")
solve(input_string)