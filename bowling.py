```
def bowling(score):
    score = score.replace('/', '')
    total_score = 0
    current_frame = 1
    for i in range(0, len(score), 2):
        if score[i] == 'X':
            total_score += 10 + (10 - int(score[i+1]) if current_frame != 10 else 0)
            current_frame += 1
        elif score[i].isdigit() and score[i+1].isdigit():
            total_score += int(score[i]) + int(score[i+1])
            current_frame += 1
        else:
            if current_frame == 10 and score[i] != 'X':
                total_score += 10 - int(score[i])
            current_frame += 1
    return total_score