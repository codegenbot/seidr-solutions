def find_zero(xs: list):
    n = len(xs)
    if n < 2:
        raise ValueError("xs must have at least two coefficients")
    largest_coeff = max(abs(x) for x in xs)
    zero_value = -xs[1] / (2 * largest_coeff)
    return zero_value


user_input = input("Enter the list of coefficients (separated by spaces): ")
try:
    coefficients = [float(i) for i in user_input.split()]
except ValueError:
    print("Invalid input. Please enter numbers separated by spaces.")
else:
    result = find_zero(coefficients)
    print(result)