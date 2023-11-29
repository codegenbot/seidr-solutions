from typing import List, Tuple

def find_closest_elements(numbers_str: str) -> Tuple[float, float]:
    numbers = [float(num) for num in numbers_str.strip().split()]
    numbers.sort()
    min_diff = float('inf')
    closest_nums = ()
    
    for i in range(len(numbers)-1):
        diff = numbers[i+1] - numbers[i]
        if diff < min_diff:
            min_diff = diff
            closest_nums = (numbers[i], numbers[i+1])
    
    return closest_nums