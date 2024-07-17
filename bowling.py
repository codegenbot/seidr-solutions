def bowling_score(game):
    score = 0
    roll = list(map(int, re.sub("[^0-9X-]", "", game)))
    for i in range(10):
        if game[i] == "X":
            score += 30
        elif game[i].isdigit() and game[i + 1] == "/":
            strike_1 = roll[2 * i : 2 * i + 2]
            score += sum(strike_1) + 10
        elif game[i].isdigit():
            frame = roll[2 * i : 2 * (i + 1)]
            if sum(frame) >= 10:
                score += sum(frame)
            else:
                score += sum(frame) + roll[2 * (i + 1)]
    return score