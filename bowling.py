```
def bowling_score(score_str):
    score = 0
    frame = 1
    for i in range(0, len(score_str), 2):
        if score_str[i].isdigit() and (i == len(score_str) - 1 or not score_str[i+1].isdigit()):
            if score_str[i] != 'X':
                strike_frame = int(score_str[i])
                while frame < 10:
                    if frame < 10 and i + 2 <= len(score_str):
                        if score_str[i+1] == '/':
                            return -1
                    score += strike_frame
                    frame += 1
            else:
                score += 10
                frame += 1
        elif score_str[i] == 'X':
            score += 10
            frame += 1
        else:
            if i + 2 <= len(score_str):
                spare = int(score_str[i:i+2])
                score += spare
                frame += 1
    return score