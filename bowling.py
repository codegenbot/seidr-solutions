```
def bowling_score(frames):
    score = 0
    frame = 1
    i = 0
    while i < len(frames):
        if frames[i].isdigit():
            current_frame = int(frames[i])
            i += 1
            if i < len(frames) and frames[i] == '/':
                score += 10 - current_frame
                frame += 1
                i += 1
            else:
                score += current_frame
                frame += 1
        elif frames[i] == '/':
            first_roll = int(frames[:i].split('/')[-1])
            second_roll = 10 - first_roll
            score += first_roll + second_roll
            frame += 2
        i += 1
    return score