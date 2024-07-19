while True:
    try:
        input_list = list(
            map(float, input("Enter space-separated coefficients: ").split())
        )
        break
    except ValueError as e:
        print("Invalid input. Please enter numeric values separated by spaces.")