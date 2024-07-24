from typing import List

def find_max_average_grade(grades: List[List[float]]) -> float:
    max_average = float('-inf')
    for student in grades:
        average = sum(student) / len(student)
        if average > max_average:
            max_average = average
    return max_average