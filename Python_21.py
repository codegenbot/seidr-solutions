from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_num = min(numbers)
    max_num = max(numbers)
    return [(num - min_num) / (max_num - min_num) for num in numbers]


input_numbers = [2.0, 4.0, 6.0, 8.0, 10.0]

result = rescale_to_unit(input_numbers)

print(result)