```
def bowling_score(frames):
    score = 0
    frame_num = 1
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            score += 30
            frame_num += 1
        elif frames[i] == '/':
            first_roll = int(frames[i-1])
            second_roll = 10 - int(frames[i+1])
            score += first_roll + second_roll
            frame_num += 1
        else:
            first_roll = int(frames[i])
            second_roll = int(frames[i+1])
            if first_roll + second_roll == 10:
                score += 10
                frame_num += 1
            elif first_roll + second_roll < 10:
                score += first_roll + second_roll
                frame_num += 1
    return score