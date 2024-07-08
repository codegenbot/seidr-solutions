```
def find_zero(xs):
    n = len(xs)
    if n < 2:
        raise ValueError("xs must have at least two coefficients")
    largest_coeff = max(abs(x) for x in xs)
    zero_value = -xs[1] / (2 * largest_coeff)
    return zero_value


user_input = input("Enter the list of coefficients (separated by spaces): ")
coefficients = [float(i) for i in user_input.split()]

try:
    if len(coefficients) < 2:
        raise ValueError("You must enter at least two coefficients")
    result = find_zero(coefficients)
    print(result)
except ValueError as e:
    print(str(e))