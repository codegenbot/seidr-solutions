from typing import List

def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_num = max_num = numbers[0]
    for num in numbers[1:]:
        min_num = min(min_num, num)
        max_num = max(max_num, num)
    rescaling_factor = max_num - min_num
    return [(num - min_num) / rescaling_factor for num in numbers]

numbers = list(map(float, input("Enter the numbers separated by spaces: ").split()))
rescale_to_unit(numbers)