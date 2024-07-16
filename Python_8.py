while True:
    try:
        input_numbers = list(map(int, input("Enter space-separated numbers: ").split()))
        if not input_numbers:
            raise ValueError("Empty input. Please enter at least one number.")
        break
    except ValueError as e:
        print(e)