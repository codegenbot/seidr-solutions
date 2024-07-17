def bowling(score):
    score = score.replace('/', '')
    total_score = 0
    i = 0
    while i < len(score):
        if score[i] == 'X':
            total_score += 10
            i += 1
            if i < len(score) and score[i] == 'X':
                total_score += 10
            elif i < len(score) and score[i] == '-':
                total_score += 10 + (10 - int(score[i+1]))
            else:
                total_score += 10 + int(score[i])
            i += 2
        elif score[i] == '-':
            total_score += 10 - int(score[i-1]) + int(score[i+1])
            i += 3
        else:
            first_roll = int(score[i])
            second_roll = int(score[i+1])
            if sum([first_roll, second_roll]) == 10:
                total_score += 10
            else:
                total_score += first_roll + second_roll
            i += 2
    return total_score