try:
    input_numbers = list(map(int, input("Enter comma-separated numbers: ").split(',')))
    if not input_numbers:
        raise ValueError
except ValueError:
    print("Invalid input. Please enter comma-separated numbers.")