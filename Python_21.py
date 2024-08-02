from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    return [(x - min(numbers)) / (max(numbers) - min(numbers)) for x in numbers]


numbers = [float(x) for x in input("Enter the numbers separated by space: ").split()]
rescaled_numbers = rescale_to_unit(numbers)
print(rescaled_numbers)