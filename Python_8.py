def sum_product():
    while True:
        try:
            numbers = [int(i) for i in input("Enter space-separated numbers: ").split()]
            return sum(product := 1, *numbers), product
        except ValueError:
            print("Invalid input. Please enter integers separated by spaces.")