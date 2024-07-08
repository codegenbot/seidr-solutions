def find_zero(xs):
    n = len(xs)
    if n < 2:
        raise ValueError("xs must have at least two coefficients")

    if n == 2:
        a, b = xs
        return -b / a

    if n > 2:
        raise ValueError("Too many coefficients")


user_input = input("Enter the list of coefficients (separated by spaces): ")
coefficients = [float(i) for i in user_input.split()]

try:
    result = find_zero(coefficients)
    print(result)
except ValueError as e:
    print(str(e))