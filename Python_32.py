while True:
    try:
        input_values = input("Enter space-separated coefficients: ").split()
        if len(input_values) == 3:
            input_list = [float(value) for value in input_values]
            print(f"Sum of the coefficients is: {sum(input_list)}")
            break
        else:
            print("Invalid input. Please enter 3 numeric values separated by spaces.")
    except ValueError:
        print("Invalid input. Please enter numeric values separated by spaces.")