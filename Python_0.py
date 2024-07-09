```
from typing import List


def has_close_elements(numbers: List[float], threshold: float) -> bool:
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) <= threshold:
            return True
    return False


def main() -> None:
    while True:
        try:
            input_str = input("Enter a list of floating point numbers separated by space: ")
            numbers = [float(num) for num in input_str.split()]
            if len(numbers) < 2:
                raise ValueError
            while True:
                try:
                    threshold = float(input("Enter the threshold value: "))
                    print(has_close_elements(numbers, threshold))
                    break
                except ValueError:
                    print("Invalid input. Please enter a valid floating point number.")
            break
        except ValueError:
            print("Invalid input. Please enter valid floating point numbers.")