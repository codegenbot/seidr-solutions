numbers = []
while True:
    try:
        numbers = [float(x) for x in input("Enter a list of numbers separated by spaces: ").split()]
        if numbers:
            break
        else:
            print("Empty input. Please enter at least one number.")
    except ValueError:
        print("Invalid input. Please enter numbers separated by spaces.")