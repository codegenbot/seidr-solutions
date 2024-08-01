def bowling_score(gutter_balls):
    score = 0
    roll = 1
    for char in gutter_balls:
        if char.isdigit():
            score += int(char) * (10 - roll)
            roll += 1
        elif char == "X":
            score += 10
        else:
            parts = char.split("/")
            score += sum(map(int, parts)) + 10
    return score