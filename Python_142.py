def sum_squares():
    while True:
        try:
            lst = list(map(int, input("Enter numbers separated by space: ").split()))
            break
        except ValueError:
            print("Invalid input. Please enter numbers separated by spaces.")

    print("The sum of squares is: ", sum(x**2 for i, x in enumerate(lst)))