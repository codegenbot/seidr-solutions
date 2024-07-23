def sum_squares(user_input=""):
    numbers = list(map(int, filter(lambda x: str.isnumeric(x), user_input.split())))
    print(sum([n**2 for n in numbers]))