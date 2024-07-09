```
from typing import List

numbers = input("Enter numbers (comma-separated): ").split(",")
threshold = float(input("Enter threshold: "))

def has_close_elements(numbers: list[float], threshold: float) -> bool:
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(float(numbers[i]) - float(numbers[i + 1])) <= threshold:
            return True
    return False

print(has_close_elements([float(x) for x in numbers], threshold))