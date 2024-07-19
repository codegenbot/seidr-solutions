try:
    a = float(input("Enter first coefficient: "))
    b = float(input("Enter second coefficient: "))
    c = float(input("Enter third coefficient: "))
    sum_coefficients = a + b + c
    print(f"Sum of the coefficients is: {sum_coefficients}")
except ValueError:
    print("Invalid input. Please enter numeric values.")