```
from typing import List


def mean_absolute_deviation() -> float:
    print("Enter some numbers: ")
    numbers = input().split()
    if len(numbers) < 2:
        print("Please enter at least two numbers.")
    else:
        try:
            numbers = [
                float(num)
                for num in numbers
                if num != ""
                and all(char.isspace() or char.isdigit() or char == "." for char in num)
            ]
            if not numbers or any(x <= 0 for x in numbers):
                print("Please enter positive numbers.")
            else:
                mean = sum(numbers) / len(numbers)
                return round(sum(abs(num - mean) for num in numbers) / len(numbers), 2)
        except ZeroDivisionError:
            print("Invalid input. Please try again.")
        except TypeError:
            print("Invalid input. Please try again.")