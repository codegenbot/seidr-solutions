from typing import List


def rescale_to_unit():
    try:
        numbers = list(
            map(float, input("Enter space-separated float numbers: ").split())
        )
        if len(numbers) == 0:
            print("Please enter at least one number.")
            return
        min_val = min(numbers)
        max_val = max(numbers)

        if max_val - min_val == 0:
            return [str(0.0)] * len(numbers)

        return ["{:.4f}".format((x - min_val) / (max_val - min_val)) for x in numbers]
    except ValueError:
        print("Program did not receive expected input. Please enter float numbers.")