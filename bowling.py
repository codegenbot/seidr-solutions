def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        if frames[i] == 'X':
            if i+1 >= len(frames) or frames[i+1] != '/': 
                score += 30
            else:
                score += 20 + int(frames[i-1])
            i += 2
        elif frames[i] == '/':
            score += 10 + int(frames[i+1])
            i += 2
        else:
            first_roll = int(frames[i])
            if i+1 < len(frames) and frames[i+1] == 'X':
                score += first_roll + 30
                i += 2
            elif i+1 < len(frames) and frames[i+1] == '/':
                score += first_roll + 10
                i += 2
            else:
                score += first_roll + int(frames[i+1])
                i += 2
    return score

print(bowling_score('8-324333X518-3463X83'))