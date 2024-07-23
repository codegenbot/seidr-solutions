```
from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_val = min(numbers)
    max_val = max(numbers)
    return [(x - min_val) / (max_val - min_val) for x in numbers]


while True:
    try:
        while True:
            numbers = input("Enter some numbers separated by space, or 'stop' to exit: ")
            if numbers.lower() == 'stop':
                break
            numbers = list(map(float, numbers.split()))
            if not all(isinstance(x, (int, float)) for x in numbers):
                print("Invalid input. Please enter valid numbers.")
            else:
                result = rescale_to_unit(numbers)
                print(result)
    except ValueError:
        print("Invalid input. Please enter valid numbers.")