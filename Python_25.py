from typing import List


def calculate_average_weight(animals: List[dict]) -> float:
    total_weight = 0
    for animal in animals:
        total_weight += animal['weight']
    return round(total_weight / len(animals), 2) if animals else None