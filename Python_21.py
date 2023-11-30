from typing import List

def rescale_to_unit(numbers: List[float]) -> List[float]:
    if not numbers:
        return []
    min_num = min(numbers)
    max_num = max(numbers)
    return [(num - min_num) / (max_num - min_num) for num in numbers]

input_numbers = [1.0, 2.0, 3.0, 4.0, 5.0]

output = rescale_to_unit(input_numbers)
print(*output)