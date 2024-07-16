def bowling_game(score):
    score = score.replace('/', '')
    total_score = 0
    frame = 1
    while len(score) > 0:
        if score[0].isdigit():
            first_roll = int(score[0])
            score = score[1:]
            if len(score) > 0 and score[0].isdigit():
                second_roll = int(score[0])
                score = score[1:]
                total_score += first_roll + second_roll
                frame += 1
            else:
                total_score += first_roll + (10 - int(score[0]))
                score = score[1:]
                frame += 1
        elif score[0] == 'X':
            if len(score) > 1 and score[1].isdigit():
                total_score += 30
                frame += 2
                score = score[2:]
            else:
                total_score += 30
                frame += 1
                score = score[1:]
        elif score[0] == '/':
            if len(score) > 1 and score[1].isdigit():
                first_roll = int(score[0])
                second_roll = int(score[1])
                total_score += first_roll + second_roll
                frame += 2
                score = score[2:]
            else:
                total_score += 10
                frame += 1
                score = score[1:]
    print(total_score)
print(bowling_game("1234567890"))