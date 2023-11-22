from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_num = min(numbers)
    max_num = max(numbers)
    return [(x - min_num) / (max_num - min_num) for x in numbers]


try:
    numbers = [float(num) for num in input("Enter a list of numbers separated by spaces: ").strip().split()]
    result = rescale_to_unit(numbers)
    print(result)
except ValueError:
    print("Invalid input. Please enter numbers separated by spaces.")