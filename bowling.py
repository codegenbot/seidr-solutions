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
                    if game[0] == "X":
                        score += (
                            10
                            + bowling_score(games[len(games) - 1 : len(games) + 3 :])[0]
                        )
                    elif game[-1] in ["-", "/"]:
                        next_frame = games[: len(games) - 1].rfind("/-") != -1
                        if not next_frame:
                            score += sum(range(1, int(game[0]) + 1)) * 10 + sum(
                                range(1, int(game[-1]) + 1)
                            )
                        else:
                            score += sum(range(1, int(game[0]) + 1)) * 10 + sum(
                                range(1, int(games[games.index(game[-1]) - 1]) + 1)
                            )
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
            if game[0] == "X":
                score += 10 + bowling_score(games[len(games) - 1 : len(games) + 3 :])[0]
            elif game[-1] in ["-", "/"]:
                next_frame = games[: len(games) - 1].rfind("/-") != -1
                if not next_frame:
                    score += sum(range(1, int(game[0]) + 1)) * 10 + sum(
                        range(1, int(game[-1]) + 1)
                    )
                else:
                    score += sum(range(1, int(game[0]) + 1)) * 10 + sum(
                        range(1, int(games[games.index(game[-1]) - 1]) + 1)
                    )
            else:
                score += sum(range(1, int(game[0]) + 1)) * 10 + sum(
                    range(1, int(game[-1]) + 1)
                )
    return [score]