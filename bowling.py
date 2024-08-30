def bowling_score(s):
    score = 0
    rolls = s.replace("/", "-").replace("X", "33").split("-")
    for i in range(0, 10):
        if len(rolls[i]) == 1:
            score += 10
        elif rolls[i] == "33":
            score += 30
        else:
            score += sum(map(int, rolls[i]))
    return score