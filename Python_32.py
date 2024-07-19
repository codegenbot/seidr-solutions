sum_coefficients = 0
for coefficient_name in ["first", "second", "third"]:
    while True:
        try:
            coefficient = float(input(f"Enter {coefficient_name} coefficient: "))
            sum_coefficients += coefficient
            break
        except ValueError:
            print("Invalid input. Please enter numeric values.")
print(f"Sum of the coefficients is: {sum_coefficients}")