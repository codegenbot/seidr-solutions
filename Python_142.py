def sum_squares(user_input):
    numbers = list(map(int, filter(lambda x: str.isnumeric(x), ' '.join(map(str, user_input)).split())))
    print(sum([n ** 2 for n in numbers]))