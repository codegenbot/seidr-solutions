def bowling_score(frames):
    score = 0
    i = 0
    while i < len(frames):
        score += score_frame(frames[i : i + 2])
        i += 2 if frames[i - 1] != "X" and frames[i - 1] != "/" else 1


def score_frame(frame):
    if frame == "XX":
        return 10 + 10
    elif frame[0] == "X":
        if len(frame) > 2:
            return int(frame[1:]) + 10
        else:
            return 10
    elif "/" in frame:
        if frame[1].isdigit():
            return int(frame[1:])
        else:
            return 10
    else:
        return sum(int(c) for c in frame)