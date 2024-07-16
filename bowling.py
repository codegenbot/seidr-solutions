```
def bowling_game(score):
    score = score.replace('/', '')
    total_score = 0
    frame = 1
    while len(score) > 0:
        if score[0] == 'X':
            total_score += 10
            if len(score) >= 2 and score[1].isdigit():
                if int(score[1]) + int(score[2]) <= 10:
                    total_score += int(score[1]) + int(score[2])
                    frame += 1
                    score = score[3:]
                else:
                    total_score += 10 + int(score[1]) + int(score[2])
                    frame += 2
                    score = score[4:]
            else:
                total_score += 10
                frame += 1
                score = score[1:]
        elif score[0].isdigit():
            first_roll = int(score[0])
            if len(score) >= 2 and score[1] == 'X':
                total_score += 10 + first_roll
                frame += 2
                score = score[2:]
            else:
                second_roll = int(score[1]) if len(score) > 1 and score[1].isdigit() else 0
                total_score += first_roll + second_roll
                frame += 1
                score = score[2:]
        else:
            strike_frame = 1
            while len(score) >= 3 and score[:3] == 'X00':
                total_score += 10 + 10
                strike_frame += 1
                score = score[3:]
            if strike_frame > 1:
                total_score -= strike_frame - 2
            frame += strike_frame
    return total_score

print(bowling_game("1234567890"))