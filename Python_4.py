while True:
    try:
        numbers = [
            float(x)
            for x in input("Enter a list of numbers separated by spaces: ").split()
        ]
        break  # Exit the loop if input is successfully converted to float
    except ValueError:
        print("Invalid input. Please enter numbers separated by spaces.")