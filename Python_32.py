while True:
    try:
        input_list = list(map(float, input("Enter space-separated coefficients: ").split()))
        if len(input_list) == 3:
            break
        else:
            print("Invalid input. Please enter 3 numeric values separated by spaces.")
    except ValueError as e:
        print("Invalid input. Please enter numeric values separated by spaces.")