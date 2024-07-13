from typing import List, Tuple
import math


def find_closest_elements() -> Tuple[float, float]:
    while True:
        try:
            numbers = list(map(float, input("Enter space-separated numbers: ").split()))
            return tuple(sorted([min(numbers), max(numbers)]))
        except ValueError:
            print(
                "Invalid input. Please enter valid floating point numbers separated by spaces."
            )