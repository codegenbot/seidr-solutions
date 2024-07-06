```
from typing import Tuple


def find_closest_elements(numbers: str) -> Tuple[float, float]:
    while True:
        try:
            numbers = [float(num) for num in numbers.split()]
            if len(numbers) < 2:
                print("Please enter at least two numbers.")
            else:
                break
        except ValueError:
            print("Invalid input. Please enter only numbers separated by spaces.")

    min_diff = float("inf")
    closest_pair = (None, None)
    diff_pair = min([(numbers[j], numbers[i]) for i in range(len(numbers)) 
                      for j in range(i + 1, len(numbers))], 
                    key=lambda x: abs(x[0]-x[1]))
    if diff_pair[0] != None:
        min_diff = abs(diff_pair[0] - diff_pair[1])
        closest_pair = (min(sorted(diff_pair)), max(sorted(diff_pair)))

    return tuple(closest_pair)

print(find_closed_elements())