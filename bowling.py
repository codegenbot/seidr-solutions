def bowling_score(score_card):
    score = 0
    roll = []
    for char in score_card:
        if char.isdigit():
            roll.append(int(char))
        else:
            if len(roll) < 2:
                return "Invalid score card"
            if sum(roll) < 10:
                score += sum(roll)
            else:
                score += 10
            roll = []
    if len(roll) > 0 and sum(roll) == 10:
        score += sum(roll)
    elif len(roll) > 0:
        return "Invalid score card"
    return score