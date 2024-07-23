```Python
from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_val = min(numbers)
    max_val = max(numbers)
    return [(x - min_val) / (max_val - min_val) for x in numbers]


while True:
    try:
        while True:
            numbers = input("Enter some numbers separated by space, or 'stop' to exit: ")
            if numbers.lower() == 'stop':
                break
            numbers = list(map(lambda x: float(x) if x.replace('-', '',).replace('.', '').isdigit() else None, numbers.split()))
            numbers = [x for x in numbers if x is not None]
            result = rescale_to_unit(numbers)
            print(result)
    except ValueError:
        print("Invalid input. Please enter valid numbers.")