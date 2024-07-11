```
from typing import List, Tuple

def find_closed_elements(numbers: List[float]) -> Tuple[Tuple[float, float], int]:
    if len(numbers) <= 1:
        return ()
    
    numbers.sort()
    min_diff = abs(numbers[0] - numbers[1])
    closest_pair = (numbers[0], numbers[1])

    for i in range(1, len(numbers) - 1):
        diff = abs(numbers[i+1] - numbers[i])
        if diff <= min_diff:
            if diff < min_diff:
                min_diff = diff
                closest_pair = (numbers[i], numbers[i+1])
        else:
            break

    return (closest_pair, min_diff)