def calculate_bowling_score(score):
    score = score.replace('/', '')
    total_score = 0
    frame = 1
    for i in range(0, len(score), 2):
        if score[i] == 'X':
            total_score += 10 + (10 - int(score[i+1])) if i < len(score) - 1 and score[i+1] != 'X' else 10
            frame += 1
        elif score[i] == '-':
            first_roll = 10 - int(score[i-1])
            total_score += first_roll + int(score[i+1]) if i < len(score) - 2 and score[i+2] != 'X' else first_roll
            frame += 1
        else:
            first_roll = int(score[i])
            second_roll = int(score[i+1])
            total_score += first_roll + second_roll
            frame += 1
    return total_score