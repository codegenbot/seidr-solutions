def sum_squares(user_input):
    if not isinstance(user_input, str) and not isinstance(user_input, tuple) and not hasattr(user_input, "__iter__"):
        return "Error: Input must be a string or iterable."
    if isinstance(user_input, list):
        numbers = [n ** 2 for n in map(int, filter(str.isnumeric, (map(str, user_input))))]
    elif isinstance(user_input, tuple):
        numbers = [n ** 2 for n in filter(lambda x: str(x).isnumeric(), user_input)]
    else:
        numbers = list(map(int, filter(str.isnumeric, user_input.split())))
    return sum(numbers)