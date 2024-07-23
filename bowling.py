def bowling_score(bowls):
    score = 0
    frames = bowls.split("/")
    for frame in frames:
        for i in range(len(frame)):
            if frame[i] == "X":
                score += 10
            elif frame[i] == "-":
                score += 0
            else:
                score += int(frame[i])
    return score