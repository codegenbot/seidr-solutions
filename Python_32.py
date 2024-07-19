while True:
    try:
        input_list = [float(x) for x in input("Enter space-separated coefficients: ").split()]
        if len(input_list) == 3 and all(isinstance(x, (int, float)) for x in input_list):
            print(f"Sum of the coefficients is: {sum(input_list)}")
            break
        else:
            print("Invalid input. Please enter exactly 3 numeric values separated by spaces.")
    except ValueError:
        print("Invalid input. Please enter numeric values separated by spaces.")