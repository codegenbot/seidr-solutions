def compare(game, guess):
    return [abs(g - gm) if g != gm else 0 for gm, g in zip(game, guess)]