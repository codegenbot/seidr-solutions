def bowling_score(s):
    s = s.replace("/", "0")
    score = 0
    roll = []
    for char in s:
        if char.isdigit():
            roll.append(int(char))
        elif char == "X":
            roll.extend([10, 0])
            score += sum(roll)
            roll = []
        else:
            if len(roll) >= 2 and sum(roll[-2:]) < 10:
                roll.pop()
    return score