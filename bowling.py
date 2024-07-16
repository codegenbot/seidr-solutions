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
            if i < len(score) and score[i].isdigit():
                second_roll = int(score[i])
                i += 1
                total_score += first_roll + second_roll
                frame += 1
            elif score[i] == 'X':
                total_score += 30
                frame += 1
                i += 1
            else:
                if len(score) > i and score[i].isdigit():
                    total_score += 10 + int(score[i])
                    frame += 2
                    i += 1
                elif score[i] == 'X':
                    total_score += 20
                    frame += 2
                    i += 1
                else:
                    total_score += 10
                    frame += 1
        else:
            if score[i] == 'X':
                total_score += 30
                frame += 1
                i += 1
            elif score[i] == '/':
                first_roll = int(score[:i].split(' ')[0])
                second_roll = int(score[i+1].split(' ')[0])
                if first_roll + second_roll == 10:
                    total_score += 10
                    frame += 1
                else:
                    total_score += 10 + second_roll
                    frame += 2
                i += 2
    return total_score

print(bowling_game("1234567890"))