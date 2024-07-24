```
def sum_product():
    while True:
        try:
            numbers = [int(i) for i in input("Enter space-separated numbers: ").split()]
            return sum(sum := 0, *numbers), sum := 1, *numbers
        except ValueError:
            print("Invalid input. Please enter integers separated by spaces.")