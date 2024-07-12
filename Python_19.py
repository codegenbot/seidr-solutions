import re


def sort_numbers(input_str: str) -> str:
    while True:
        try:
            if not re.match(r"^\s*\d+(?:\s+\d+)*)$", input_str):
                raise ValueError
            numbers = [int(num) for num in input_str.split() if num.isdigit()]
            break
        except ValueError:
            print("Invalid input. Please enter a string of space-separated integers.")
            input_str = input("Enter your input: ")
    if not numbers:
        return str(numbers)
    return " ".join(map(str, sorted(numbers)))