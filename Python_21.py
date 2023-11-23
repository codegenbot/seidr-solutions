from typing import List

def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_num = min(numbers)
    max_num = max(numbers)
    return [(num - min_num) / (max_num - min_num) for num in numbers]

numbers = input("Enter the numbers: ").split()
numbers = [float(num) for num in numbers]

result = rescale_to_unit(numbers)

print("Rescaled numbers:", result)