```
def bowling_score(frames):
    score = 0
    frame = 1
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            score += 30
            frame += 1
        elif frames[i:i+2].startswith('///'):
            score += 30
            frame += 1
        else:
            first_roll = int(frames[i])
            if i + 3 < len(frames) and frames[i+1] == 'X':
                second_roll = 10 - first_roll
                score += 10 + (10 - first_roll)
                frame += 1
            elif i + 2 < len(frames) and frames[i:i+2].endswith('X'):
                second_roll = int(frames[i+1])
                if second_roll == 10:
                    score += 10 + first_roll
                else:
                    score += 10 + first_roll + second_roll
                frame += 1
            elif i + 1 < len(frames) and frames[i+1] == '/':
                second_roll = 10 - int(frames[i])
                score += 10 + (10 - int(frames[i]))
                frame += 1
            else:
                second_roll = int(frames[i+1].split('/')[0])
                if second_roll == 10:
                    score += 10 + first_roll
                else:
                    score += 10 + first_roll + second_roll
                frame += 1
    return score