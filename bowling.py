def bowling_score(frames):
    score = 0
    rolls = frames.split("/")
    for i in range(0, len(rolls), 2):
        if rolls[i] == "X":
            score += 30
            if i < len(rolls) - 1:
                score += int(rolls[i + 1])
        elif rolls[i] != "10":
            score += int(rolls[i]) + int(rolls[i + 1])
        else:
            score += 10
    return score