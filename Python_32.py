try:
    a, b, c = map(float, input("Enter three coefficients (numeric values separated by space): ").split())
    sum_coefficients = a + b + c
    print(f"Sum of the coefficients is: {sum_coefficients}")
except ValueError:
    print("Invalid input. Please enter numeric values separated by space.")