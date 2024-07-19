try:
    a = float(input("Enter first coefficient (numeric value): "))
    b = float(input("Enter second coefficient (numeric value): "))
    c = float(input("Enter third coefficient (numeric value): "))
    sum_coefficients = a + b + c
    print(f"Sum of the coefficients is: {sum_coefficients}")
except ValueError:
    print("Invalid input. Please enter numeric values.")