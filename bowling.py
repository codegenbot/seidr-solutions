```
def bowling_score(frames):
    if not isinstance(frames, str) or len(frames) != 20:
        return "Invalid input"
    
    score = 0
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            score += 30
        elif frames[i] == '/':
            first_roll = int(frames[i-1])
            second_roll = 10 - int(frames[i+1])
            score += first_roll + second_roll
        else:
            first_roll = int(frames[i])
            second_roll = int(frames[i+1])
            if first_roll + second_roll >= 10:
                score += first_roll + second_roll
            else:
                score += first_roll
    return score