def bowling_score(s):
    s = s.replace("/", "")
    score = 0
    rolls = [int(x) for x in re.split("D|X", s)]
    for i in range(10):
        if len(rolls) > i:
            if rolls[i] == 10:
                score += 10 + (
                    i < 9 and len(rolls) > i + 1 and rolls[i + 1] + rolls[i + 2] or 0
                )
            else:
                score += sum(rolls[: i + 1])
        elif s[i].upper() == "X":
            if i < 8:
                score += 10 + (len(rolls) > i + 2 and rolls[i + 2] + rolls[i + 3] or 0)
            else:
                score += 10
        else:
            frame_score = sum(rolls[: i + 1])
            if len(rolls) > i + 1 and sum(rolls[i + 1 : i + 3]) == 10:
                score += 10 + frame_score
            else:
                score += frame_score
    return score