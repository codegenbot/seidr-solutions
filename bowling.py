```
def bowling_score(frames):
    score = 0
    frame_num = 1
    for i in range(0, len(frames), 2):
        if frames[i] == 'X':
            score += 10
            if i < 18 and frames[i+1] == '/':
                score += int(frames[i+2])
        elif frames[i] == '/':
            first_roll = int(frames[i-1])
            second_roll = 10 - first_roll
            score += first_roll + second_roll
            frame_num += 1
        else:
            first_roll = int(frames[i])
            if i < 18 and frames[i+1] == 'X':
                score += 10 + first_roll
            elif i < 18 and frames[i+1].isdigit():
                score += first_roll + int(frames[i+1])
            frame_num += 1
    return score