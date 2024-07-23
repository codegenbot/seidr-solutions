def bowling(score_str):
    score = 0
    frames = score_str.split("/")
    for frame in frames:
        for bowl in frame:
            if bowl == "X":
                score += 10
            elif bowl == "-":
                score += 0
            else:
                score += int(bowl)
    return score