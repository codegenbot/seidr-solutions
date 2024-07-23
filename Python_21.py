from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_val = min(numbers)
    max_val = max(numbers)
    return [(x - min_val) / (max_val - min_val) for x in numbers]


while True:
    try:
        numbers = input("Enter some numbers separated by space: ")
        numbers = list(map(float, numbers.split()))
        result = rescale_to_unit(numbers)
        print(result)
        break
    except ValueError:
        print("Invalid input. Please enter valid numbers.")