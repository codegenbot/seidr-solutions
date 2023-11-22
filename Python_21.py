from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_num = min(numbers)
    max_num = max(numbers)
    return [(x - min_num) / (max_num - min_num) for x in numbers]


input_str = input("Enter a list of comma-separated numbers: ")
numbers = [float(num) for num in input_str.replace(" ", "").split(",")]
result = rescale_to_unit(numbers)
print("Result:", result)