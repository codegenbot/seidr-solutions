def compare(game, guess):
    return [abs(g - gv) for g, gv in zip(game, guess)]