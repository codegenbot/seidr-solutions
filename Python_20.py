from typing import Tuple

def find_closest_elements() -> Tuple[float, float]:
    while True:
        try:
            numbers = [float(num) for num in input("Enter space-separated numbers: ").split()]
            numbers.sort()
            min_diff = float("inf")
            closest_pair = (None, None)

            for i in range(len(numbers) - 1):
                diff = abs(numbers[i + 1] - numbers[i])
                if diff < min_diff:
                    min_diff = diff
                    closest_pair = (numbers[i], numbers[i + 1])

            return closest_pair

        except ValueError:
            print("Invalid input. Please enter valid decimal or integer values.")

print(find_closest_elements())
input("Press Enter when ready: ")