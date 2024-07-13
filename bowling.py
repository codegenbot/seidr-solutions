def bowling_score(game):
    score = 0
    game = game.rstrip()
    rolls = []
    i = 0
    while i < len(game):
        if game[i] == "X":
            score += 10
            i += 2
        elif game[i] == "-":
            frame_score = sum(int(x) for x in reversed([c for c in game[i:i+3][::-1] if c.isdigit()]))
            if frame_score < 10:
                score += int(game[i + 2]) if i + 2 < len(game) and game[i + 2].isdigit() else 0
            i += 4
        else:
            first_roll = int(game[i]) if game[i].isdigit() else 0
            second_roll = int(game[i + 1]) if i + 1 < len(game) and game[i + 1].isdigit() else 0
            rolls.extend([first_roll, second_roll])
            score += sum(rolls[-2:])
            i += 3

    return score