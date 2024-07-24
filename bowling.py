def handle_bonus(bowls, score):
    bonus = sum(map(lambda x: 10 if x == "X" else 0, bowls[10:]))
    score += bonus
    for i in range(10, len(bowls) - 1):
        if bowls[i] == "/":
            score += 10 - int(bowls[i - 1]) if bowls[i - 1].isdigit() else 0
            if i == 10:
                score += get_strike_bonus(bowls, i + 1)
    return score