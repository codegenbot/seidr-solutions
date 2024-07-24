def handle_bonus(bowls, score):
    def get_strike_bonus(bowls, frame):
        if bowls[frame] == "X":
            return 10
        elif bowls[frame].isdigit():
            return int(bowls[frame])
        return 0

    bonus = sum(map(lambda x: 10 if x == "X" else 0, bowls[11:]))
    if bowls[9] == "X" or bowls[9] == "10":
        bonus += get_strike_bonus(bowls, 10)

    score += bonus

    for i in range(10, len(bowls) - 1):
        if bowls[i] == "/":
            score += 10 - int(bowls[i - 1]) if bowls[i - 1].isdigit() else 10

    return score