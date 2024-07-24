from typing import List

numbers = list(map(float, input().split()))

def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_num = min(numbers)
    max_num = max(numbers)
    return [(x - min_num) / (max_num - min_num) for x in numbers]