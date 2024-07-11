from typing import List

def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_num = min(numbers)
    max_num = max(numbers)
    return [(x - min_num) / (max_num - min_num) for x in numbers] if all(isinstance(x, float) for x in numbers) else []

numbers = [float(num) for num in input("Enter numbers separated by spaces: ").split()]
rescaled_numbers = rescale_to_unit(numbers)
print(rescaled_numbers)