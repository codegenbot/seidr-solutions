def calculate_bowling_score(input_string):
    score = 0
    frame = 1
    frame_score = 0
    spare = False
    strike = False
    bonus = False

    for char in input_string:
        if char == 'X':
            score += 10
            if frame < 10:
                bonus = True
                strike = True
                frame += 1
            else:
                bonus = False
        elif char == '/':
            score += 10 - frame_score
            if frame < 10:
                bonus = True
                spare = True
                frame += 1
            else:
                bonus = False
        elif char == '-':
            if bonus:
                score += 0
            else:
                frame_score += 0
        else:
            score += int(char)
            frame_score += int(char)
            if spare:
                score += int(char)
                spare = False
            if strike:
                score += int(char)
                strike = False

        if frame_score == 10 and not bonus:
            frame_score = 0
            if frame < 10:
                frame += 1

    return score

input_string = input()
print(calculate_bowling_score(input_string))