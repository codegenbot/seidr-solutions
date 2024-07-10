def bowling_score(frames):
    score = 0
    for i in range(10):
        if "/" in frames[i * 2 : i * 2 + 2]:
            frame_value = list(map(int, frames[i * 2 : i * 2 + 2].split("/")))
            score += sum(frame_value)
        else:
            score += int(frames[i * 2])
    return score