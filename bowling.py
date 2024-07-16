```
def bowling_game(score):
    score = score.replace('/', '')
    total_score = 0
    frame = 1
    i = 0
    while len(score) > 0:
        if score[i].isdigit():
            first_roll = int(score[i])
            i += 1
            if score[i] == 'X' or str(int(score[i])) + score[i+1] in ['10', '20']:
                if frame < 9:
                    total_score += first_roll + 10
                else:
                    total_score += first_roll + int(score[i+1]) + int(score[i+2])
                frame += 1
                i += 1
            elif len(score) > 0 and score[i].isdigit():
                if frame < 9:
                    total_score += first_roll + int(score[i])
                else:
                    total_score += first_roll + int(score[i]) + int(score[i+1])
                frame += 1
                i += 2
            else:
                total_score += first_roll
                frame += 1
        elif score[i] == 'X':
            total_score += 10 + 10
            frame += 2
            i += 1
        else:
            if len(score) > 0 and score[i].isdigit():
                total_score += 10 + int(score[i])
                frame += 2
                i += 2
            else:
                total_score += 10
                frame += 1
    return total_score

print(bowling_game("1234567890"))