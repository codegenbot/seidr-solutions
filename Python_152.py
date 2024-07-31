def compare(game, guess):
    return [abs(g - gm) if g != gm else 0 for g, gm in zip(game, guess)]