def remove_duplicates(input_numbers=None):
    numbers = []
    if input_numbers is not None:
        for num in input_numbers:
            while True:
                user_num = input(f"Enter an integer ({num} or 'q' to quit): ")
                if user_num.lower() == 'q':
                    break
                elif str(num) != str(user_num):
                    numbers.append(int(user_num))
    else:
        while True:
            num = input("Enter an integer (or 'q' to quit): ")
            if num.lower() == 'q':
                break
            numbers.append(int(num))
    return list(set(numbers))