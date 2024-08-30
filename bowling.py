def bowling_score(frames):
    score = 0
    frame_num = 1
    for frame in frames.split("/"):
        if len(frame) == 1:
            strike = True
        elif len(frame) > 1 and "X" in frame:
            spare = False
        else:
            strike = False
            spare = True

        if strike:
            score += 10 + 10 * (frame_num - 1)
        elif spare:
            score += 10 + int(frame[0])
            frame_num += 1
        else:
            score += sum(map(int, frame))
            frame_num += 1
    return score