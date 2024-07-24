def bowling_score(frames):
    score = 0
    frame_scores = [0] * 11
    for i, frame in enumerate(frames.split("/")):
        if len(frame) == 1:
            strike = True
        elif int(frame) < 10:
            spare = True
        else:
            frame_scores[i] = int(frame)
        score += frame_scores[i]
        if strike:
            score += 10 + sum(map(int, frames.split("/")[i + 1 : i + 2]))
            strike = False
        elif spare:
            score += 10 + map(int, frames.split("/")[i + 1 : i + 2])[0]
            spare = False
    return score