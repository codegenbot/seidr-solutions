```
def bowling_game(score):
    score = score.replace('/', '')
    total_score = 0
    frame = 1
    while len(score) > 0:
        if score[0] == 'X':
            total_score += 10
            if len(score) >= 2 and score[1] in ['X', '/']:
                score = score[2:]
            else:
                score = score[1:]
            frame += 1
        elif score[0] != '0' or (len(score) < 2):
            first_roll = int(score[0])
            if len(score) >= 2 and score[1] == 'X':
                total_score += first_roll + 10
                score = score[2:]
                frame += 1
            elif len(score) >= 2 and score[1].isdigit():
                second_roll = int(score[1])
                if first_roll + second_roll == 10:
                    score = score[2:]
                else:
                    total_score += first_roll + second_roll
                    score = score[1:]
                frame += 1
            else:
                total_score += first_roll
                score = score[1:]
                frame += 1
        else:
            first_roll = int(score[0])
            second_roll = int(score[1])
            total_score += first_roll + second_roll
            score = score[2:]
            frame += 1
    return total_score

print(bowling_game("1234567890"))