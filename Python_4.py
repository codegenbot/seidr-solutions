try:
    numbers = []
    while True:
        numbers.extend([int(x) for x in input("Enter a list of numbers separated by spaces: ").split()])
        print("Sum of input numbers:", sum(numbers))
except ValueError as e:
    print("Invalid input. Please make sure to enter numbers separated by spaces.")
    print("Example input: 1 2 3")
except Exception as e:
    print("Error reading input. Please make sure to enter numbers separated by spaces.")