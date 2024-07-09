from typing import List

def has_close_elements(numbers: List[float], threshold: float) -> bool:
    numbers = [1.0, 2.0, 3.5, 4.5]
    threshold_value = 1.0

    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            if abs(numbers[i] - numbers[j]) <= threshold_value:
                return True
    return False

print(has_close_elements([1.0, 2.0, 3.5, 4.5], 1.0))