```
import re


def sort_numbers() -> str:
    while True:
        input_str = input("Enter a string of space-separated integers (or 'q' to quit): ")
        if input_str.lower() == 'q':
            return None
        try:
            if not re.match(r"^\s*\d+(?:\s+\d+)*)$", input_str):
                raise ValueError
            numbers = [int(num) for num in input_str.split() if num.isdigit()]
            if not numbers:
                return str(numbers)
            return " ".join(map(str, sorted(numbers)))
        except ValueError:
            print("Invalid input. Please enter a string of space-separated integers.")