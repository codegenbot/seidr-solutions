def calculate_score(round_string):
    score = 0
    frame = 1
    frame_score = 0
    strike = False
    spare = False
    for i in range(len(round_string)):
        if round_string[i] == 'X':
            score += 10
            if frame < 10:
                if strike:
                    score += 10
                if spare:
                    score += 10
                strike = True
                spare = False
                frame += 1
        elif round_string[i] == '/':
            score += 10 - frame_score
            if frame < 10:
                if strike:
                    score += 10
                if spare:
                    score += 10
                strike = False
                spare = True
                frame += 1
        elif round_string[i] == '-':
            frame_score = 0
            if frame < 10:
                if strike:
                    score += 10
                if spare:
                    score += 10
                strike = False
                spare = False
                frame += 1
        else:
            score += int(round_string[i])
            frame_score = int(round_string[i])
            if frame < 10:
                if strike:
                    score += int(round_string[i])
                if spare:
                    score += int(round_string[i])
                if frame_score == 10:
                    strike = True
                    spare = False
                else:
                    strike = False
                    spare = False
                frame += 1
    return score

round_string = input()
print(calculate_score(round_string))