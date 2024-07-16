try:
    input_numbers = list(map(int, input("Enter comma-separated numbers: ").split(',')))
except ValueError:
    print("Invalid input. Please enter comma-separated numbers.")