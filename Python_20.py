```
from typing import Tuple


def find_closest_pair() -> Tuple[float, float]:
    while True:
        user_input = input("Enter two space-separated numbers: ")
        try:
            numbers = [float(num) for num in user_input.split()]
            if len(numbers) != 2:
                print("Please enter exactly two numbers.")
            else:
                break
        except ValueError:
            print("Invalid input. Please enter only two numbers separated by spaces.")

    min_diff = float('inf')
    closest_pair = ()
    
    for i in range(len(numbers) - 1):
        diff = numbers[i + 1] - numbers[i]
        if diff < min_diff:
            min_diff = diff
            closest_pair = (numbers[i], numbers[i + 1])
    
    return closest_pair

print(find_closest_pair())