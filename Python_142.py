```
def sum_squares(user_input):
    if not isinstance(user_input, str) and not isinstance(user_input, tuple) and not hasattr(user_input, "__iter__"):
        return
    if isinstance(user_input, str):
        numbers = list(map(int, filter(lambda x: str.isnumeric(x), user_input.split())))
    elif isinstance(user_input, tuple) or hasattr(user_input, "__iter__"):
        numbers = [int(i) for i in user_input if isinstance(i, int)]
    print(sum([n ** 2 for n in numbers]))