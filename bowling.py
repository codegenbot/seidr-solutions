def bowling_score(frames):
    score = 0
    roll1, roll2 = 0, 0
    for i in range(10):
        if frames[i] == "X":
            score += 30
        elif "-" in frames[i]:
            rolls = list(map(int, re.split("/", frames[i])))
            score += sum(rolls)
        else:
            roll1, roll2 = map(int, frames[i].split("/"))
            if roll1 + roll2 >= 10:
                score += 10 + roll2
            else:
                score += roll1 + roll2
    return score