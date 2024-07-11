def rescale_to_unit():
    while True:
        try:
            numbers = list(map(float, input("Enter a list of floats separated by spaces: ").split()))
            return rescale_to_unit(numbers)
        except ValueError:
            print("Invalid input. Please enter a list of floats separated by spaces.")