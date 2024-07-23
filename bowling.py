```
def solve(input_string):
    score = 0
    i = 0
    for frame in input_string.split():
        if frame == "X":
            score += 10 + (i < 9) * (sum(map(int, [int(x) for x in input_string[input_string.index(frame)+1:input_string.index(frame)+3].split('/')])) + sum(map(int, input_string[input_string.index(frame)+3:].split())[:1]))
            i += 1
        elif "/" in frame:
            parts = frame.split("/")
            if len(parts) > 1 and parts[0] == 'X':
                score += 10 + (i < 9) * (sum(map(int, [int(x) for x in input_string[input_string.index(frame)+2:input_string.index(frame)+3].split('/')])) + sum(map(int, input_string[input_string.index(frame)+4:].split())[:1]))
            else:
                total_pins = 0
                for part in parts:
                    if part.isdigit():
                        total_pins += int(part)
                    else:
                        total_pins += 10
                score += total_pins
            i += 1
        else:
            if frame.isdigit():
                score += sum(map(int, [int(x) for x in frame]))
            else:
                total_pins = 0
                for part in frame.split('-'):
                    total_pins += int(part)
                score += total_pins
            i += 1

    print(score)

input_string = input("Enter the individual bowls: ")
solve(input_string)