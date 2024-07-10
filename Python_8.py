def calculate_score(exam1: int, exam2: int) -> Tuple[int, str]:
    total_score = exam1 + exam2
    average = (
        total_score / 2
        if total_score > 0
        else "Error: Both exams must have a score greater than zero"
    )

    return (total_score, average)