def bowling_game(score_str):
    score = 0
    roll = ""
    for char in score_str:
        if char.isdigit():
            roll += char
        else:
            if len(roll) == 1:
                score += int(roll)
            elif len(roll) == 2:
                score += sum(range(int(roll[0]) + 1, int(roll[1]) + 1))
            roll = ""
    if len(roll) > 0:
        if len(roll) == 1:
            score += int(roll)
        elif len(roll) == 2:
            score += sum(range(int(roll[0]) + 1, int(roll[1]) + 1))
    return score