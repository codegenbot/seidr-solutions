def bowling_score(frames):
    score = 0
    roll = 0
    frames_list = frames.split("/")
    for frame in frames_list:
        if len(frame) == 1:
            score += int(frame)
        elif len(frame) == 2:
            score += int(frame[0]) + int(frame[1])
        else:
            score += 10
            roll += 1
            if roll < 10 and (frames_list.index(str(frame)) + 1 < len(frames_list) and str(frame)[0].isdigit()):
                score += int(str(frame)[0])
    return score