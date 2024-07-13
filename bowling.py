def bowling_score(game):
    score = 0
    game = game.rstrip()
    for i in range(0, len(game), 2):
        if game[i] == "X":
            score += (
                10 + (10 - int(game[i + 1 :].lstrip().count("X")))
                if i < len(game) - 1
                else 10
            )
        elif game[i] == "-":
            if i < len(game) - 2 and game[i + 2].isdigit():
                rolls = [
                    int(x)
                    for x in reversed(
                        [c for c in game[i - 1 : i + 3][::-1] if c.isdigit()]
                    )
                ]
                score += sum(rolls)
            else:
                score += 10
        else:
            first_roll = int(game[i])
            second_roll = int(game[i+1]) if i+1 < len(game) and game[i+1].isdigit() else 0

            if first_roll == 10:
                score += 10 + second_roll
            else:
                score += first_roll + second_roll
    return score


print(bowling_score("X1-1681357-0/XX7/4"))