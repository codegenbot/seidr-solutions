```
def bowling_game(score):
    score = score.replace('/', '')
    total_score = 0
    frame = 1
    while len(score) > 0:
        if score[0].isdigit():
            first_roll = int(score[0])
            score = score[1:]
            if len(score) >= first_roll:
                for i in range(first_roll):
                    total_score += int(score[0])
                    score = score[1:]
                frame += 1
            else:
                if len(score) > 0 and score[0] == 'X':
                    total_score += 30
                    frame += 1
                    score = score[1:]
                elif len(score) > 0 and score[0].isdigit():
                    second_roll = int(score[0])
                    score = score[1:]
                    if second_roll + first_roll < 10:
                        total_score += first_roll + second_roll
                        frame += 1
                    else:
                        total_score += 10 + second_roll
                        frame += 2
                else:
                    total_score += 10
                    frame += 1
        elif score[0] == 'X':
            total_score += 30
            frame += 1
            score = score[1:]
        else:
            if len(score) >= 2 and score[:2] == 'XX':
                total_score += 20
                frame += 2
                score = score[2:]
            elif len(score) >= 2 and score[:2].isdigit():
                first_roll = int(score[:2][0])
                second_roll = int(score[:2][1])
                if first_roll + second_roll == 10:
                    total_score += 10 + int(score[2])
                    frame += 2
                    score = score[3:]
                else:
                    total_score += first_roll + second_roll
                    frame += 2
                    score = score[2:]
            else:
                total_score += 10
                frame += 1
    return total_score

print(bowling_game("1234567890"))