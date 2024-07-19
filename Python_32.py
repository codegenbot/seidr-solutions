while True:
    try:
        input_list = list(map(float, input("Enter space-separated coefficients: ").split()))
        if len(input_list) == 3 and all(isinstance(val, (int, float)) for val in input_list):
            print(f"Sum of the coefficients is: {sum(input_list)}")
            break
        else:
            print("Invalid input. Please enter 3 numeric values separated by spaces.")
    except ValueError:
        print("Invalid input. Please enter numeric values separated by spaces.")