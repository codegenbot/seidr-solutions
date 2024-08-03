```
def bowling_score(frames):
    score = 0
    frame_number = 1
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            if frame_number < 10:
                score += 30
            else:
                score += 10
        elif frames[i] == '/':
            first_roll = int(frames[i-1])
            second_roll = 10 - int(frames[i+1])
            score += first_roll + second_roll
        else:
            first_roll = int(frames[i])
            if frames[i+1] == 'X':
                score += 10 + 10
            elif frames[i+1] == '/':
                score += 10 + (10 - int(frames[i+2]))
            else:
                score += first_roll + int(frames[i+1])
        frame_number += 1
    return score