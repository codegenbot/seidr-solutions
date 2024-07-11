def calculate_average_score(students_scores):
    total = 0
    for score in students_scores:
        total += int(score)
    average = total / len(students_scores)
    return str(int(average))