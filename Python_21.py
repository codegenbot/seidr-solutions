```Python
from typing import List


def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_val = min(numbers)
    max_val = max(numbers)
    return [(x - min_val) / (max_val - min_val) for x in numbers]


while True:
    try:
        numbers_str = input("Enter some numbers separated by space: ")
        if not numbers_str.strip():  # check if the input is empty
            print("Please enter at least one number.")
            continue
        
        numbers = list(map(float, numbers_str.split()))
        result = rescale_to_unit(numbers)
        print(result)
        break
    except ValueError:
        print("Invalid input. Please enter valid numbers.")