while True:
    try:
        input_numbers = input("Enter three floating-point numbers separated by space: ").split()
        if len(input_numbers) != 3:
            raise ValueError
        input_numbers = list(map(float, input_numbers))
        print("Input accepted successfully.")
        break
    except ValueError:
        print("Invalid input. Please enter exactly three floating-point numbers separated by space.")