def bowling_score(frames):
    score = 0
    roll = 0
    for frame in frames.split("/"):
        if len(frame) == 1:
            score += int(frame[0]) * 10 + (10 - roll)
            roll = 0
        elif len(frame) > 1:
            strike = False
            if frame[0] == "X":
                strike = True
                frame = frame[1:]
            score += int("".join(filter(str.isdigit, frame))) + (10 - roll)
            if not strike:
                roll = 1
        else:
            spare = False
            if frame[0] == "X" or frame[0] in ["/", ""]:
                spare = True
                frame = frame[1:]
            score += int("".join(filter(str.isdigit, frame))) + (10 - roll)
            if not spare:
                roll = 2
    return score