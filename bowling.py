```
def bowling_score(frames):
    score = 0
    frame_count = 1
    for frame in frames.split('/'):
        if len(frame) == 2 and int(frame[0]) + int(frame[1]) == 10:
            score += 10 + (10 - int(frame[0])) * (frame_count <= 2)
            frame_count += 1
        elif len(frame) == 1:
            score += int(frame) * (frame_count <= 2)
            frame_count += 1
        else:
            if int(frame[0]) + int(frame[1]) < 10:
                score += 10 + int(frame[0]) + int(frame[1])
                frame_count += 1
            elif int(frame[0]) == 10:
                score += 10 + 10
                frame_count += 1
            else:
                score += 10 + int(frame[0]) + (10 - int(frame[0])) * (frame_count <= 2)
                frame_count += 1
    return score