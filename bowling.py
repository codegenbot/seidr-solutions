```
def bowling_game(score):
    score = score.replace('/', '')
    total_score = 0
    frame = 1
    while len(score) > 0:
        if score[0] == 'X':
            total_score += 30
            score = score[1:]
            frame += 1
            if frame < 10 and (score[0].isdigit() or score[0] == 'X'):
                if score[0] == 'X':
                    total_score += 10 + int(score[0]) + int(score[1])
                    score = score[2:]
                    frame += 1
                else:
                    total_score += 10 + int(score[0])
                    score = score[1:]
                    frame += 1
        elif len(score) >= 2 and score[:2] == 'XX':
            total_score += 20
            score = score[2:]
            frame += 1
        else:
            first_roll = int(score[0])
            if len(score) > 1 and score[1].isdigit():
                second_roll = int(score[1])
                if first_roll + second_roll == 10:
                    total_score += 10 + second_roll
                    score = score[2:]
                    frame += 1
                else:
                    total_score += first_roll + second_roll
                    score = score[1:]
                    frame += 1
            else:
                total_score += first_roll
                score = score[1:]
                frame += 1
    return total_score

print(bowling_game("1234567890"))