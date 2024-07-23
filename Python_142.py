def sum_squares():
    user_input = input("Enter some numbers separated by spaces: ")
    numbers = list(map(int, filter(lambda x: str.isnumeric(x), user_input.split())))
    print(sum([n ** 2 for n in numbers]))