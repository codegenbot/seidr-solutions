```
def bowling_score(games):
    score = 0
    game = ""
    for char in games:
        if char.isdigit():
            game += char
        else:
            if game:
                if len(game) == 1:
                    score += int(game)
                elif len(game) == 2:
                    score += int(game[0]) * 10 + int(game[1])
                else:
                    if game == "X":
                        score += 10 + 10
                    elif game[-1] in ["/", "X"]:
                        score += 10 + sum(range(1, int(game[0]) + 1))
                    else:
                        score += sum(range(1, int(game[0]) + 1)) * 10 + sum(
                            range(1, int(game[-1]) + 1)
                        )
                game = ""
    if game:
        if len(game) == 1:
            score += int(game)
        elif len(game) == 2:
            score += int(game[0]) * 10 + int(game[1])
        else:
            if game == "X":
                score += 10 + 10
            elif game[-1] in ["/", "X"]:
                score += 10 + sum(range(1, int(game[0]) + 1))
            else:
                score += sum(range(1, int(game[0]) + 1)) * 10 + sum(
                    range(1, int(game[-1]) + 1)
                )
    return score