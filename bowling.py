def bowling_score(s):
    score = 0
    roll = 0
    for i in s:
        if i.isdigit():
            if int(i) == 10:
                score += 10 + (10 - roll) if roll > 0 else 10
                roll = 0
            elif i == "X":
                score += 10 + (10 - roll) if roll > 0 else 10
                roll = 0
            else:
                roll += int(i)
        else:
            if roll > 1:
                score += 10
            elif roll == 1 and i != "/":
                score += 10
            roll = 0
    return score