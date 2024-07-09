def compare(game, guess):
    return [abs(g - gm) if gm != g else 0 for g, gm in zip(guess, game)]