while True:
    try:
        input_numbers = list(map(int, input("Enter space-separated numbers: ").split()))
        if not input_numbers:
            raise ValueError
        break
    except ValueError:
        print("Invalid input. Please enter space-separated numbers only.")