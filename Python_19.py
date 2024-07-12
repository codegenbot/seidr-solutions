```
import re
def sort_numbers(input_str: str) -> str:
    while True:
        try:
            numbers = [int(num) for num in re.split(r'\s+', input_str) if num.isdigit()]
            break
        except ValueError:
            print("Invalid input. Please enter a string of space-separated integers.")
            input_str = input("Enter your input: ")
    if not numbers:
        return str(numbers)
    return ' '.join(map(str, sorted(numbers)))