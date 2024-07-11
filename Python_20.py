from typing import List, Tuple

def find_closed_elements(numbers: list[float]) -> tuple[float, float]:
    if len(numbers) <= 1:
        return ()