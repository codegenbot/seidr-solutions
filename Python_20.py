```
from typing import Tuple

def find_closest_elements() -> Tuple[float, float]:
    while True:
        user_input = input("Enter space-separated numbers: ")
        if not user_input:
            print("Invalid input. Please enter at least one number.")
            continue
        try:
            numbers = [float(num) for num in user_input.split()]
            if len(numbers) < 2:
                print("Invalid input. Please enter at least two numbers.")
                continue
            numbers.sort()
            min_diff = float("inf")
            closest_pair = (None, None)

            for i in range(len(numbers) - 1):
                diff = numbers[i + 1] - numbers[i]
                if diff < min_diff:
                    min_diff = diff
                    closest_pair = (numbers[i], numbers[i + 1])

            return closest_pair

        except ValueError:
            print("Invalid input. Please enter valid decimal or integer values.")

print(find_closest_elements())