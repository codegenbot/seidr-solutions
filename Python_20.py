from typing import List, Tuple

def find_closest_elements(numbers: List[float]) -> Tuple[float, float]:
    min_diff = float('inf')
    closest_pair = ()

    if len(set(numbers)) != len(numbers):
        return ()
    
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            diff = abs(numbers[i] - numbers[j])
            if diff < min_diff:
                min_diff = diff
                sorted_nums = tuple(sorted((numbers[i], numbers[j])))
                closest_pair = (min(sorted_nums), max(sorted_nums))
    
    return closest_pair