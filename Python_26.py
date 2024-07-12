def remove_duplicates(input_numbers=None):
    numbers = []
    seen = set()
    if input_numbers is not None:
        for num in input_numbers:
            while True:
                user_num = int(input(f"Enter an integer ({num} or 'q' to quit): "))
                if str(user_num).lower() == 'q':
                    break
                if user_num != num and user_num not in seen:
                    numbers.append(user_num)
                    seen.add(user_num)
    else:
        while True:
            user_num = int(input("Enter an integer (or 'q' to quit): "))
            if str(user_num).lower() == 'q':
                break
            if user_num not in seen:
                numbers.append(user_num)
                seen.add(user_num)

    return list(set(numbers))