```
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
            numbers_list = []
            for num in numbers.split():
                try:
                    num = float(num)
                    numbers_list.append(num)
                except ValueError:
                    print("Invalid input. Please enter valid numbers.")
            if numbers_list:
                result = rescale_to_unit(numbers_list)
                print(result)
    except ValueError:
        print("Invalid input. Please enter valid numbers.")