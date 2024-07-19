def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == 'X':
            if i + 1 < len(frames) and frames[i+1] in ['X', '/']:
                score += 30
            else:
                score += 10 + int(frames[i-1])
            i += 1
        elif frames[i] == '/':
            score += 10
            i += 2
        else:
            first_roll = int(frames[i])
            if i < len(frames) - 1 and frames[i+1] in ['X', '/']:
                if frames[i+1] == 'X':
                    second_roll = 10
                else:
                    second_roll = int(frames[i+1])
                score += first_roll + second_roll
                i += 2
            else:
                if i < len(frames) - 1 and int(frames[i]) + int(frames[i+1]) == 10:
                    score += 10
                else:
                    score += first_roll + int(frames[i+1])
                i += 2
    return score