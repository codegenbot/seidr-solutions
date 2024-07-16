```
def bowling_game(score):
    score = score.replace('/', '')
    total_score = 0
    frame = 1
    while len(score) > 0:
        if score[0] == 'X':
            total_score += 30
            if len(score) >= 2 and score[:2] in ['XX', 'SX']:
                total_score += 10
            frame += 1
            score = score[1:]
        elif score[0].isdigit():
            first_roll = int(score[0])
            score = score[1:]
            if len(score) > 0 and (score[0] == '/' or score[0] == 'X'):
                total_score += first_roll + 10
                frame += 2
                score = score[1:]
            elif len(score) > 0 and int(score[0]) == 10:
                total_score += 10 + first_roll
                frame += 2
                score = score[1:]
            else:
                if len(score) >= 2 and str(int(score[0]) + int(score[1])) in ['11', '12', '13', '14', '15', '16']:
                    total_score += 10 + first_roll
                    frame += 2
                    score = score[2:]
                else:
                    total_score += first_roll + int(score[0])
                    frame += 2
        else:
            if len(score) >= 2 and str(int(score[0]) + int(score[1])) == '10':
                total_score += 10
                frame += 2
                score = score[2:]
            else:
                total_score += 10
                frame += 1
    return total_score

print(bowling_game("1234567890"))