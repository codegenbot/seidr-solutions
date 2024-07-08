def find_zero(xs: list):
    n = len(xs)

    if n < 2:
        raise ValueError("xs must have at least two coefficients")

    # Check for linear equation
    if n == 2:
        a, b = xs
        return f"-{b} / {a}"

    # Check for quadratic equation
    if n == 3:
        a, b, c = xs
        d = b**2 - 4 * a * c
        if d < 0:
            return "The equation has no real solutions"
        elif d == 0:
            return "-b / (2*a)"
        else:
            r1 = (-b + d**0.5) / (2 * a)
            r2 = (-b - d**0.5) / (2 * a)
            return f"The zeros are {r1} and {r2}"

    # Calculate the zero for linear equations
    if n == 3:
        a, b, c = xs
        zero_value = -c / a
        return str(zero_value)


user_input = input("Enter the list of coefficients (separated by spaces): ")
coefficients = [float(i) for i in user_input.split()]

try:
    if len(coefficients) < 2:
        raise ValueError("You must enter at least two coefficients")
    result = find_zero(coefficients)
    print(result)
except ValueError as e:
    print(str(e))