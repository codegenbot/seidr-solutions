import re


def sort_numbers():
    while True:
        try:
            if not re.match(r"^\s*\d+(?:\s+\d+)*)$", input("Enter your input: ")):
                raise ValueError
            numbers = [
                int(num) for num in input("Enter your input: ").split() if num.isdigit()
            ]
            break
        except ValueError:
            print("Invalid input. Please enter a string of space-separated integers.")
    if not numbers:
        return str(numbers)
    return " ".join(map(str, sorted(numbers)))