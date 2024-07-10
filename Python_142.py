def sum_squares():
    numbers = input("Enter numbers (separated by space): ").split()
    total_sum = 0
    for i in range(len(numbers)):
        while True:
            try:
                num = float(numbers[i])
                break
            except ValueError as e:
                print(e)
        total_sum += num ** 2
    return total_sum