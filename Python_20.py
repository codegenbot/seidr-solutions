```
from typing import Tuple

def find_closest_elements() -> Tuple[float, float]:
    while True:
        try:
            num1, num2 = [float(num) for num in input("Enter two space separated floating point numbers: ").split()]
            if len([num1, num2]) != 2 or not all(isinstance(n, (int, float)) for n in [num1, num2]):
                raise ValueError
            break
        except ValueError:
            print("Invalid input. Please enter exactly two space-separated floating-point numbers.")
            continue

    closest_pair = (min(num1, num2), max(num1, num2))
    
    return closest_pair