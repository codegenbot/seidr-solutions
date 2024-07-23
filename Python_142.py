```
def sum_squares(user_input):
    if not isinstance(user_input, str) and not isinstance(user_input, tuple) and not hasattr(user_input, "__iter__"):
        return "Error: Input must be a string or iterable."
    numbers = []
    if isinstance(user_input, str):
        numbers = list(map(int, filter(lambda x: str.isnumeric(x), user_input.split())))
    elif hasattr(user_input, "__iter__"):
        numbers = [int(i) for i in user_input]
    print(sum([n ** 2 for n in numbers]))