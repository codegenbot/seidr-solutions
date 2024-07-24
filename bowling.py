def bowling_score(s):
    score = 0
    roll = 0
    for i in range(1, len(s) + 1):
        if s[i - 1] == "X":
            score += 10
            roll = 2
        elif s[i - 1].isdigit():
            if s[i - 1] == "5" and roll < 2:
                score += int(s[i - 1])
                roll += 1
            else:
                score += int(s[i - 1])
        elif s[i - 1] == "/":
            strike = False
            if i > 1 and s[i - 2] == "X":
                strike = True
            if not strike:
                score += int(s[: i - 1].replace("/", "")) + int(
                    s[i:].replace("/", "", 1)
                )
            else:
                score += 10 + int(s[i:].replace("/", "", 1))
        elif s[i - 1] == "-":
            if i > 2 and s[i - 3 : i - 2] == "X" and s[i - 2] == "/":
                score += 10 + int(s[i + 1 :].replace("/", "", 1))
            else:
                score += int(s[: i - 1].replace("/", "")) + int(
                    s[i + 1 :].replace("/", "", 1)
                )
    return score