```
def bowling_score(frames):
    score = 0
    frame_count = 0
    for frame in frames:
        if frame == 'X':  # strike
            score += 10 + (10 * (9 - frame_count))
            frame_count += 1
        elif frame == '/':  # spare
            score += 10 + (5 * (9 - frame_count))
            frame_count += 1
        else:
            if len(frame) > 1:  # two bowls in a frame
                score += int(frame[0]) + int(frame[-1])
            else:  # one bowl in a frame
                score += int(frame)
            frame_count += 1
    return score