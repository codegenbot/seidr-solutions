```
def bowling_game(frames):
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            if i < 8:
                score += 30
            else:
                score += 10 + (10 - (i % 2)) * 10
        elif frames[i:i+2] == 'XX':
            score += 20
        elif frames[i].isdigit():
            first_roll = int(frames[i])
            if i < 8 and frames[i+1].isdigit():
                second_roll = int(frames[i+1])
                if first_roll + second_roll >= 10:
                    score += 10 + (10 - (first_roll + second_roll)) * 10
                else:
                    score += first_roll + second_roll
            elif i < 8 and frames[i+1] == 'X':
                score += first_roll + 10
            else:
                score += first_roll
        else:
            if i > 0 and frames[i-1].isdigit():
                first_roll = int(frames[i-1])
                if first_roll >= 10:
                    score += 10 + (10 - first_roll) * 10
                else:
                    score += first_roll
    return score