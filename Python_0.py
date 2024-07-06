from typing import List

def has_close_elements(numbers: List[float], threshold: float) -> bool:
    numbers = [float(i) for i in input("Enter space-separated numbers: ").split()]
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            if abs(numbers[i] - numbers[j]) <= threshold:
                return True
    return False

print(has_close_elements([], 0.5))