def calculate_averages(scores: List[int]) -> List[float]:
    averages = []
    for i in range(0, len(scores), 2):
        if (i + 1) < len(scores):
            average = (scores[i] + scores[i+1]) / 2
        else:
            average = scores[i]
        averages.append(format(average, '.2f'))
    return [float(i) for i in averages]