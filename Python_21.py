def rescale_to_unit():
    while True:
        try:
            numbers = list(map(float, input("Enter a list of floats separated by spaces: ").split()))
            return [(x - min(numbers)) / (max(numbers) - min(numbers)) for x in numbers]
        except ValueError:
            print("Invalid input. Please enter a list of floats separated by spaces.")