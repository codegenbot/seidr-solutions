```
def bowling_score(frames):
    score = 0
    roll = 0
    frames_list = [int(x) for x in frames.split("/")]

    for i, frame in enumerate(frames_list[:10]):
        if frame == 10:  
            if i < 8:
                score += 10 + next_frames(i)[0] * 2
            elif i == 9:
                score += 10 + sum(frames_list[8:]) * 2
            roll += 3
        else:  
            first_roll = int(str(frame)[0])
            second_roll = int(str(frame)[1]) if len(str(frame)) == 2 else 0
            score += first_roll + second_roll
            roll += 2

    return score


def next_frames(i):
    if i < 8:
        return [0]
    elif i == 9:
        return [10]