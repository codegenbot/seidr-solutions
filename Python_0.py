```
from typing import List


def has_close_elements(numbers: List[float], threshold: float) -> bool:
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) <= threshold:
            return True
    return False


def has_close_elements() -> None:
    while True:
        try:
            input_list = input("Enter a list of floating point numbers separated by space: ")
            input_list = [float(num) for num in input_list.split()]
            if len(input_list) < 2:
                raise ValueError
            threshold_value = float(input("Enter the threshold value: "))
            print(has_close_elements(input_list, threshold_value))
            break
        except ValueError:
            print("Invalid input. Please enter valid floating point numbers.")