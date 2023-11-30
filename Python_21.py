from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_num = min(numbers)
    max_num = max(numbers)
    return [(num - min_num) / (max_num - min_num) for num in numbers]


numbers = list(map(float, input().split()))
rescaled_numbers = rescale_to_unit(numbers)
for num in rescaled_numbers:
    print(num, end=" ")