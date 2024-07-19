try:
    input_list = list(map(float, input("Enter space-separated coefficients: ").split()))
    # Continue with the rest of your code here
except ValueError:
    print("Invalid input. Please enter space-separated coefficients as floating-point numbers.")