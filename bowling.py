def bowling_score(game):
    score = 0
    roll = list(map(int, game.replace("/", "")))
    for i in range(10):
        if len(str(i + 1)) == 2:
            frame = [int(x) for x in str(i + 1)]
            score += sum(frame)
        elif len(str(i + 1)) == 1:
            score += roll[i]
        else:
            if roll[i] == 10:
                score += 10 + roll[i + 1]
                i += 1
            else:
                frame = roll[i : i + 2]
                score += sum(frame)
    return score