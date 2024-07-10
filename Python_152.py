def compare(game, guess):
    return [abs(g - gg) if gg != g else 0 for g, gg in zip(game, guess)]