from typing import List

def rescale_to_unit(numbers: List[float]) -> List[float]:
    if len(numbers) < 2 or not all(isinstance(x, float) for x in numbers):
        return []

    min_num = min(numbers)
    max_num = max(numbers)

    return [(x - min_num) / (max_num - min_num) for x in numbers]

while True:
    try:
        input_numbers = input()
        if not input_numbers:
            break
        numbers = [float(num) for num in input_numbers.split()]
        result = rescale_to_unit(numbers)
        print(result)
    except EOFError:
        break