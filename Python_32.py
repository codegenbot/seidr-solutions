try:
    input_list = list(map(float, input("Enter space-separated coefficients: ").split()))
except ValueError as e:
    print("Invalid input. Please enter numeric values separated by spaces.")