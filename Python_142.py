def sum_squares(user_input=""):
    numbers = user_input.split()
    for i in range(len(numbers)):
        while True:
            try:
                num = float(numbers[i])
                break
            except ValueError as e:
                print(e)
    return sum([float(i) ** 2 for i in numbers])