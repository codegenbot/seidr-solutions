def compare(game, guess):
    return [abs(score - score_guess) for score_guess, score in zip(guess, game)]