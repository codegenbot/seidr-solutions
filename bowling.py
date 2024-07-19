```
def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == 'X':
            score += 30
            i += 1
            if i < len(frames) and frames[i] == 'X':
                score += 30
                i += 1
        elif frames[i] == '/':
            score += 10
            i += 1
            while i < len(frames) - 1 and not frames[i].isdigit():
                i += 1
        else:
            first_roll = int(frames[i])
            if i < len(frames) - 1 and frames[i+1] == 'X':
                score += first_roll + 30
                i += 2
            elif i < len(frames) - 1 and frames[i+1].isdigit() and frames[i+2].isdigit():
                second_roll = int(frames[i+1]) + int(frames[i+2])
                if second_roll == 10:
                    score += first_roll + 10
                else:
                    score += first_roll + second_roll
                i += 2
            else:
                if i < len(frames) - 1 and frames[i+1].isdigit():
                    second_roll = int(frames[i+1])
                    if first_roll + second_roll == 10:
                        score += 10
                    else:
                        score += first_roll + second_roll
                    i += 2
                else:
                    i += 1
    return score