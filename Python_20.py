```
from typing import List, Tuple

def find_closest_elements() -> Tuple[float, float]:
    """
    This function finds the closest pair of numbers in a list.
    
    Args: None
    Returns: A tuple containing the two closest numbers.
    """
    numbers = list(map(float, input("Enter space-separated numbers: ").split()))
    min_diff = float("inf")
    closest_pair = ()

    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            diff = abs(numbers[i] - numbers[j])
            if diff < min_diff:
                min_diff = diff
                closest_pair = (numbers[i], numbers[j])

    return closest_pair

print(find_closest_elements())