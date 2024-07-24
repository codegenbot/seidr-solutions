def sum_squares():
    total_sum = 0
    while True:
        try:
            num = int(input("Enter an integer (or 'done' to finish): "))
            if num == 'done':
                break
            if num % 2 != 0:
                total_sum += num ** 2
        except ValueError:
            print("Invalid input. Please enter a valid integer or 'done'.")
    return total_sum