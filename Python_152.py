def compare(game, guess):
    return [abs(g - gm) for g, gm in zip(guess, game)]