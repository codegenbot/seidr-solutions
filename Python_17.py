def calculate_average_grade(grades: list) -> float:
    if not grades:
        return 0.0
    total = sum(grade for grade in grades)
    average = total / len(grades)
    return round(average, 2)