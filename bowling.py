def bowling_score(frames):
    score = 0
    for i, frame in enumerate(frames.split("/")):
        if len(frame) == 1:
            if frame == "X":
                score += 30
            else:
                return -1
        elif len(frame) == 2:
            strike = True if frame[0] == "X" else False
            if strike:
                score += (
                    10
                    + max([int(x) for x in frames.split("/")[i + 1].split()[0:2]]) * 2
                )
            else:
                score += int(frame[0]) * 2 + int(frame[1])
        else:
            frame_score = sum(map(int, frame))
            if i < 9 and sum(map(int, frames.split("/")[i + 1])) >= 10:
                score += (
                    frame_score
                    + max([int(x) for x in frames.split("/")[i + 1].split()[0:2]]) * 2
                )
            else:
                score += frame_score
    return score