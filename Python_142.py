def sum_squares():
    numbers = input("Enter numbers (separated by space): ").split()
    for i in range(len(numbers)):
        while True:
            try:
                num = float(numbers[i])
                break
            except ValueError as e:
                print(e)
    return sum([float(i) ** 2 for i in numbers])