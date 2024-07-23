def sum_squares(user_input):
    if not isinstance(user_input, str) and not isinstance(user_input, tuple) and not hasattr(user_input, "__iter__"):
        return "Error: Input must be a string or iterable."
    numbers = list(map(int, filter(lambda x: str.isnumeric(x), user_input.split())))
    print(sum([n ** 2 for n in numbers]))