from typing import List


def rescale_to_unit():
    numbers = []

    while True:
        user_input = input("Please enter a number (or 'stop' to finish): ")

        if user_input.lower() == "stop":
            break

        try:
            numbers.append(float(user_input))
        except ValueError:
            print("Invalid input. Please enter a number or type 'stop' to finish.")

    if not numbers:
        return []

    min_val = min(x for x in numbers)
    max_val = max(x for x in numbers)

    if min_val == max_val:
        return [0.0] * len(numbers)

    return [(x - min_val) / (max_val - min_val) for x in numbers]