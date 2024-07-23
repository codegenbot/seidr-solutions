def sum_squares(user_input):
    numbers = [int(i) ** 2 for i in re.findall(r'\d+', str(user_input))]
    return sum(numbers)