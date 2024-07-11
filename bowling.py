def bowling_score(frames):
    score = 0
    frames = frames.replace("/", "-").split("-")
    for i, f in enumerate(frames):
        if f == "X":
            if i < len(frames) - 1:
                score += 10 + int(frames[i+1]) * 2
            else:
                score += 10
        elif f == "":
            if i < len(frames) - 1:
                score += 10 + int(frames[i+1])
            else:
                score += 10
        elif f != "0":
            if len(f) > 1:
                score += int(f)
            else:
                if i < len(frames) - 1 and frames[i+1] == "0":
                    score += 10 + int(frames[i+2])
                else:
                    score += int(f) + int(frames[i+1].lstrip("0"))
    return score