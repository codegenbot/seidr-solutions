def bowling_score(score):
    score = [int(x) for x in score.replace("/", "0").replace("X", "10")]
    return sum(min(i + 1, 10) * j for i, j in enumerate(score))