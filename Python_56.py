def calculate_average_score(scores):
    total = 0
    for score in scores:
        total += int(score)
    average = total / len(scores)
    return average