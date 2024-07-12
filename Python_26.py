def remove_duplicates(input_numbers=None):
    if input_numbers is not None:
        return list(set(input_numbers))
    numbers = []
    while True:
        user_num = int(input("Enter an integer (or 'q' to quit): "))
        if str(user_num).lower() == 'q':
            break
        if user_num not in numbers:
            numbers.append(user_num)
    return numbers