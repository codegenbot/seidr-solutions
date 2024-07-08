```
def find_zero(xs: list):
    n = len(xs)
    if n < 2:
        raise ValueError("xs must have at least two coefficients")
    
    # Check for quadratic equation
    if n == 3:
        a, b, c = xs
        d = b**2 - 4*a*c
        if d < 0:
            return "The equation has no real solutions"
        elif d == 0:
            return "-b / (2*a)"
        else:
            r1 = (-b + d**0.5) / (2*a)
            r2 = (-b - d**0.5) / (2*a)
            return f"The zeros are {r1} and {r2}"
    
    # Calculate the zero for linear equations
    if n < 2:
        raise ValueError("xs must be a list of at least two coefficients")
    largest_coeff = max(abs(x) for x in xs)
    zero_value = -xs[1] / (2 * largest_coeff)
    return str(zero_value)


user_input = input("Enter the list of coefficients (separated by spaces): ")
while len([float(i) for i in user_input.split()]) < 2:
    print("You must enter at least two coefficients")
    user_input = input("Enter the list of coefficients (separated by spaces): ")

coefficients = [float(i) for i in user_input.split()]

try:
    result = find_zero(coefficients)
    print(result)
except ValueError as e:
    print(str(e))