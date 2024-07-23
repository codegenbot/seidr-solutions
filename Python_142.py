```
import re

def sum_squares():
    while True:
        try:
            user_input = input("Please enter a number or comma-separated numbers: ")
            if ',' in user_input:
                user_input = [int(x) for x in user_input.split(',')]
                break
            else:
                user_input = int(user_input)
                break
        except ValueError:
            print("Invalid input. Please try again.")

    if isinstance(user_input, (int, float)):
        numbers = [n ** 2]
    elif not isinstance(user_input, str) and not isinstance(user_input, tuple) and not hasattr(user_input, "__iter__"):
        return
    else:
        if isinstance(user_input, list):
            numbers = [n ** 2 for n in map(int, filter(lambda x: re.match(r'\d+', str(x)), user_input))]
        else:
            numbers = list(map(int, filter(lambda x: re.match(r'\d+', str(x)), map(str, user_input))))
    return sum(numbers)