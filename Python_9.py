while True:
    try:
        input_numbers = list(map(int, input("Enter comma-separated numbers: ").split(',')))
        if all(isinstance(num, int) for num in input_numbers):
            break
        else:
            raise ValueError
    except ValueError:
        print("Invalid input. Please enter comma-separated numbers with only integers.")