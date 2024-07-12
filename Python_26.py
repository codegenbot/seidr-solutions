def remove_duplicates(input_numbers=None):
    numbers = set()
    if input_numbers is not None:
        numbers.update(input_numbers)
    while True:
        user_num = int(input("Enter an integer (or 'q' to quit): "))
        if str(user_num).lower() == 'q':
            break
        numbers.add(user_num)
    return list(numbers)