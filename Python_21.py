from typing import List

def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_num = min(numbers)
    max_num = max(numbers)
    return [(num - min_num) / (max_num - min_num) for num in numbers]

input_numbers = input("Enter numbers separated by spaces: ").split()
numbers = [float(num) for num in input_numbers]
result = rescale_to_unit(numbers)
print(result)