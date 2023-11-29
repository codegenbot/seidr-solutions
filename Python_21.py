from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_num = min(numbers)
    max_num = max(numbers)
    return [(num - min_num) / (max_num - min_num) for num in numbers]


input_str = input()
input_nums = [float(num) for num in input_str.split()]
rescaled_nums = rescale_to_unit(input_nums)
print(rescaled_nums)