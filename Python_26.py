def remove_duplicates(input_numbers=None):
    numbers = []
    if input_numbers is not None:
        for num in input_numbers:
            while True:
                user_num = int(input(f"Enter an integer ({num} or 'q' to quit): "))
                if str(user_num).lower() == 'q':
                    break
                if user_num != num:
                    numbers.append(user_num)

    else:
        while True:
            num = int(input("Enter an integer (or 'q' to quit): "))
            if str(num).lower() == 'q':
                break
            numbers.append(num)

    return list(set(numbers))

   