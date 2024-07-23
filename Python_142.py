```
import re

def sum_squares(user_input):
    if not isinstance(user_input, (str, tuple)):
        return "Invalid input type"

    numbers = []
    if isinstance(user_input, str):
        numbers = list(map(int, filter(lambda x: re.match(r'\d+', str(x)), user_input.split())))
    else:
        numbers = [n ** 2 for n in map(int, filter(lambda x: re.match(r'\d+', str(x)), user_input))]
        
    return sum(numbers)