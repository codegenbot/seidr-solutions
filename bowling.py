def bowling_score(games):
    score = 0
    for game in games.split("/"):
        game_score = 0
        for roll in game:
            if roll.isdigit():
                game_score += int(roll)
            else:
                if game_score < 10:
                    game_score += 10 - game_score
                elif game_score == 10:
                    game_score += 10
        score += game_score
    return score