def calculate_average_grade(grades: List[float]) -> float:
    if not grades:
        return 0
    return sum(grades) / len(grades)