def bowling_score(s):
    score = 0
    roll = []
    for char in s:
        if char.isdigit():
            roll.append(int(char))
        elif char == "/":
            if len(roll) < 2:
                return "Invalid input"
            score += sum(roll)
            roll = []
        elif char.lower() == "x":
            score += 10 + sum(roll)
            roll = []
        else:
            if len(roll) > 1:
                score += sum(roll)
                roll = []
    if len(roll) > 0:
        score += sum(roll)
    return score