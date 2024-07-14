def bowling_score(s):
    score = 0
    roll = ""
    for c in s:
        if c.isdigit():
            roll += c
        elif c == "/":
            if len(roll) >= 2:
                score += int(roll[0]) * 10 + int(roll[1])
                roll = ""
            else:
                raise ValueError("Invalid input")
        elif c in "-X":
            if len(roll) > 0:
                strike = int(roll) == 10
                if not strike and len(roll) < 2:
                    score += 10
                elif strike or (len(roll) >= 2 and sum(map(int, roll)) <= 10):
                    score += 10 + sum(map(int, roll))
                else:
                    raise ValueError("Invalid input")
                roll = ""
    if len(roll) > 0:
        score += int(roll)
    return score