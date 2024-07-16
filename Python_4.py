try:
    numbers = [float(x) for x in input("Enter a list of numbers separated by spaces: ").split()]
except ValueError:
    print("Invalid input. Please enter numbers separated by spaces.")
    # Handle the error, such as asking for input again or exiting the program