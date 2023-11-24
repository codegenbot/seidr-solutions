def calculate_bowling_score(input_string):
    score = 0
    frame = 1
    frame_score = 0
    bonus = 0

    for char in input_string:
        if char == 'X':
            score += 10
            if frame < 10:
                bonus = 2
                frame += 1
        elif char == '/':
            score += 10 - frame_score
            if frame < 10:
                bonus = 1
                frame += 1
        elif char == '-':
            score += 0
        else:
            score += int(char)
            frame_score += int(char)
            if bonus > 0:
                score += int(char)
                bonus -= 1

        if frame_score == 10 and bonus == 0:
            frame_score = 0
            if frame < 10:
                frame += 1

    return score

input_string = input()
print(calculate_bowling_score(input_string))