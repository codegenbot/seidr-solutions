while True:
    try:
        input_numbers = list(map(float, input("Enter three floating-point numbers separated by space: ").split()))
        if len(input_numbers) == 3:
            break
        else:
            raise ValueError
    except ValueError:
        print("Invalid input. Please enter exactly three floating-point numbers separated by space.")