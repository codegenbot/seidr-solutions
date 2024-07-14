```
def bowling_score(score):
    score = score.replace('/', '')
    total_score = 0
    frame_score = 0
    for i in range(10):
        if score[i] == 'X':
            total_score += 30
            frame_score = 30
        elif score[i].isdigit():
            if len(str(score[i])) == 1:
                frame_score += int(score[i])
            else:
                first_roll, second_roll = map(int, str(score[i]))
                if first_roll + second_roll == 10:
                    total_score += first_roll + 10
                    frame_score = 0
                else:
                    total_score += first_roll + second_roll
                    frame_score = 0
        elif score[i] == '-':
            total_score += frame_score
            frame_score = 0
    return total_score