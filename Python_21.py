from typing import List

def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_num = min(numbers)
    max_num = max(numbers)
    scaled_numbers = [(num - min_num) / (max_num - min_num) for num in numbers]
    return scaled_numbers

input_numbers = list(map(float, input("Enter the numbers (separated by space): ").split()))

result = rescale_to_unit(input_numbers)
print(result)