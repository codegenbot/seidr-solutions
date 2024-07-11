```
from typing import Tuple
import sys

def find_closest_elements() -> Tuple[float, float]:
    numbers = [float(num) for num in sys.argv[1:]]
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