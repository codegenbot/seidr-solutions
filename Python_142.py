import re

def sum_squares(user_input):
    if not isinstance(user_input, str) and not isinstance(user_input, tuple) and not hasattr(user_input, "__iter__"):
        return
    if isinstance(user_input, list):
        numbers = [n ** 2 for n in map(int, filter(lambda x: re.match(r'\d+', str(x)), user_input))]
    else:
        numbers = list(map(int, filter(lambda x: re.match(r'\d+', str(x)), user_input.split())))
    return sum(numbers)