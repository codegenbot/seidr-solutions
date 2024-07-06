
def compare(scores, guesses):
    return [abs(score - guess) for score, guess in zip(scores, guesses)]