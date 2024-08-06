def bowling_score(s):
    score = 0
    rolls = s.replace("/", "")
    for i in range(0, len(rolls), 2):
        if rolls[i] == "X":
            score += 10 + int(rolls[i + 1 : i + 3])
        elif rolls[i] != "X" and rolls[i + 1] == "X":
            score += 10 + int(rolls[i])
        else:
            score += sum(map(int, rolls[i : i + 2]))
    return score