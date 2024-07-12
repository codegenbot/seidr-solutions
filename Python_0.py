from typing import List

def has_close_elements(numbers: List[float], threshold: float) -> bool:
    if len(numbers) < 2:
        return True
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            if abs(numbers[i] - numbers[j]) <= threshold:
                return False
    return True

numbers = [1.0, 1.1, 2.2]
threshold = 0.5
print(has_close_elements(numbers, threshold))