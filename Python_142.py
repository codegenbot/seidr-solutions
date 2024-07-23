```
import re

def sum_squares(user_input):
    if not isinstance(user_input, (int, float)):
        return
    if isinstance(user_input, int) or isinstance(user_input, float):
        numbers = [n ** 2 for n in [user_input]]
    else:
        raise ValueError("Invalid input. Please enter a single integer or float.")
    return sum(numbers)