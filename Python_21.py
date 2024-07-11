from typing import List


def rescale_to_unit():
    numbers = input("Please enter the list of numbers (space-separated): ")

    try:
        numbers_list = [float(num) for num in numbers.split()]
        if not numbers_list:
            return []

        min_val = min(numbers_list)
        max_val = max(numbers_list)

        if min_val == max_val:
            return [0.0] * len(numbers_list)
        return [(x - min_val) / (max_val - min_val) for x in numbers_list]
    except ValueError:
        print("Invalid input. Please enter a list of space-separated numbers.")
        return []


print(rescale_to_unit())