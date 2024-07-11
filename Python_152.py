def compare(game, guess):
    return [abs(g - gi) for g, gi in zip(game, guess)]