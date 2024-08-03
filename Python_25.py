from typing import List
import math

def calculate_average_age(people: List[dict]) -> float:
    total_age = 0
    for person in people:
        total_age += person['age']
    return total_age / len(people)