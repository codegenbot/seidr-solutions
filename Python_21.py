from typing import List
import sys


def rescale_to_unit(numbers: List[float]) -> List[float]:
    if not numbers:
        return []
    min_num = min(numbers)
    max_num = max(numbers)
    return [(num - min_num) / (max_num - min_num) for num in numbers]


input_numbers = [float(num) for num in sys.argv[1:]]

output = rescale_to_unit(input_numbers)
print(*output)