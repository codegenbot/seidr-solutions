def bowling_score(frames):
    score = 0
    frame = 1
    for i in range(len(frames)):
        if frames[i].isdigit():
            score += int(frames[i])
            if frame == 10:
                break
            frame += 1
        elif frames[i] == '/':
            first_roll = int(frames[:i-1].rstrip('/').split('/')[-1])
            second_roll = int(frames[i+1:])
            score += 10 - (first_roll + second_roll)
            frame += 1
    return score