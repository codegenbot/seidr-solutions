def sum_squares():
    while True:
        try:
            lst = list(map(int, input("Enter numbers separated by space: ").split()))
            break
        except ValueError:
            print("Invalid input. Please enter numbers separated by spaces.")

    return sum(i ** 2 if i % 3 == 0 and (i + 1) % 4 != 0 else i ** 3 for i in lst)