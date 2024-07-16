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
                for i in range(first_roll-1):
                    score = score[:i]+score[i+1:]
                if len(score) == 0:
                    total_score += 10 + 10
                else:
                    second_roll = int(score[0])
                    score = score[1:]
                    if second_roll == 10:
                        total_score += first_roll + 10
                    elif sum(map(int, str(first_roll)+str(second_roll))) == 10:
                        total_score += first_roll + second_roll
                    else:
                        total_score += first_roll + first_roll
                frame += 1
            else:
                if len(score) > 0 and score[0] == 'X':
                    total_score += 30
                    frame += 1
                    score = score[1:]
                elif len(score) > 0 and score[0].isdigit():
                    second_roll = int(score[0])
                    score = score[1:]
                    if second_roll + first_roll == 10:
                        total_score += 10 + 10
                    else:
                        total_score += 10 + second_roll
                    frame += 2
                else:
                    total_score += 10
                    frame += 1
        elif score[0] == 'X':
            if len(score) > 1 and score[1].isdigit():
                total_score += 30
                frame += 1
                score = score[2:]
            else:
                total_score += 30
                frame += 2
                score = score[1:]
        print(total_score)
print(bowling_game("1234567890"))