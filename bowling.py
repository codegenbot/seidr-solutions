def bowling_score(frames):
    score = 0
    frames = frames.replace("-", "/").split("/")
    for i, f in enumerate(frames):
        if f == "X":
            if i < 9:
                score += 10
            else:
                if i + 1 < len(frames):
                    score += int(frames[i + 1]) * 2
        elif f == "":
            if i < 9:
                score += 10
            else:
                if i + 1 < len(frames):
                    score += int(frames[i + 1])
        elif f != "0":
            score += (
                int(f) + int(frames[i + 1].lstrip("0"))
                if i < 8 and f + frames[i + 1] != "10"
                else int(f)
            )
    return score