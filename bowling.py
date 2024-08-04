```
def bowling_score(frames):
    score = 0
    frame_number = 1
    for frame in frames.split('/'):
        if len(frame) == 1:
            score += 10
        elif int(frame) < 10:
            score += int(frame)
        else:
            if frame_number == 9 and int(frame) != 10:
                return -1
            if int(frame) == 10:
                score += 10 + (10 - int(list(frame)[0]))
            else:
                score += int(frame[0]) + int(frame[-1])
                score += 10 - int(frame[0])
        frame_number += 1
    return score