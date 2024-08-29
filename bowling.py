```
def bowling_score(frames):
    score = 0
    frame_count = 0
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            score += 30
            frame_count += 1
        elif frames[i] == '/':
            first_roll = int(frames[i+1])
            if first_roll < 10:
                score += first_roll + 10 - 1
                frame_count += 1
            else:
                score += 10 + (first_roll - 10)
                frame_count += 1
        else:
            first_roll = int(frames[i])
            second_roll = int(frames[i+1])
            if first_roll + second_roll < 11:
                score += first_roll + second_roll
                frame_count += 1
            else:
                score += 10 + (10 - first_roll)
                frame_count += 1
    return score