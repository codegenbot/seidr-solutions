```
def bowling_game(score):
    score = score.replace('/', '')
    total_score = 0
    frame = 1
    i = 0
    while len(score) > i:
        if score[i].isdigit():
            first_roll = int(score[i])
            i += 1
            if i < len(score):
                second_roll = int(score[i])
                i += 1
                if first_roll + second_roll == 10:
                    if score[i] == 'X':
                        total_score += 30
                        frame += 1
                        i += 1
                    else:
                        total_score += 10 + int(score[i])
                        frame += 1
                else:
                    total_score += first_roll + second_roll
                    frame += 1
            elif first_roll == 10:
                total_score += 10 + int(score[i]) + int(score[i+1])
                i += 2
                frame += 2
            else:
                if score[i].isdigit():
                    total_score += 10
                    frame += 1
                    i += 1
                else:
                    total_score += 10 + 10
                    frame += 2
                    i += 2
        elif score[i] == 'X':
            total_score += 30
            frame += 1
            i += 1
    return total_score

print(bowling_game("1234567890"))