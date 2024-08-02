def find_max_score(game_scores):
    max_score = float('-inf')
    for score in game_scores:
        if score > max_score:
            max_score = score
    return max_score