from typing import List
  
def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_num, max_num = None, None
    for num in numbers:
        if min_num is None or num < min_num:
            min_num = num
        if max_num is None or num > max_num:
            max_num = num
    scaled_numbers = [(num - min_num) / (max_num - min_num) for num in numbers]
    return scaled_numbers