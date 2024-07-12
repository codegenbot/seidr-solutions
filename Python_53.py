def sum_of_numbers():
    total_sum = 0
    while True:
        user_input = input("Enter a number (or 'q' to quit): ")
        if user_input.lower() == 'q':
            break
        try:
            num = int(user_input)
            total_sum += num
        except ValueError:
            pass
    return total_sum