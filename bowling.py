def bowling_score(game):
    score = 0
    roll = [int(x) if x.isdigit() else 10 if x == "X" else 0 for x in game]
    frame = []
    while roll:
        frame.append(roll[:2] or [0, 0])
        roll = roll[1:]
    for i, f in enumerate(frame):
        score += sum(f)
        if f[0] + f[1] == 10:
            try:
                score += frame[i + 1][0]
            except IndexError:
                pass
    return score