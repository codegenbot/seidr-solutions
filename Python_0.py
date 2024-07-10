from typing import List

numbers_input = input("Enter numbers (comma-separated): ")
if not numbers_input.strip():
    print("Please enter some values")
else:
    try:
        numbers = [float(x) for x in numbers_input.split(",")]
        threshold = float(input("Enter threshold: "))
        print(has_close_elements(numbers, threshold))
    except ValueError:
        print(
            "Invalid input. Please ensure all entries are numeric and separated by commas."
        )