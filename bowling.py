def bowling_score(s):
    score = 0
    for i in range(10):
        if s[i * 2] == "X":
            if i < 9:
                score += 30 + int(s[(i + 1) * 2])
            else:
                score += 30
        elif s[i * 2 : i * 2 + 2].isdigit():
            roll = [int(x) for x in s[i * 2 : i * 2 + 2]]
            if sum(roll) == 10:
                if i < 9:
                    score += sum(roll) + int(s[(i + 1) * 2])
                else:
                    score += sum(roll)
            else:
                score += sum(roll)
        else:
            roll = [int(x) for x in s[i * 2 : i * 2 + 3]]
            if sum(roll) == 10:
                score += sum(roll)
    return score