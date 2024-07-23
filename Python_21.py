from typing import List


def rescale_to_unit():
    numbers = input("Enter a list of floats separated by space: ").split()
    try:
        numbers = [float(num) for num in numbers]
        min_val = min(numbers)
        max_val = max(numbers)
        print([str((x - min_val) / (max_val - min_val)) for x in numbers])
    except ValueError:
        print("Invalid input. Please enter a list of floats separated by space.")


rescale_to_unit()