def compare(game, guess):
    return [abs(g - gg) for g, gg in zip(game, guess)]