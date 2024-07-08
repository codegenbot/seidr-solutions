```
def find_zero(xs: list):
    n = len(xs)
    if n < 2:
        raise ValueError("xs must have at least two coefficients")
    
    # Check for linear equation
    if n == 2:
        a, b = xs
        zero_value = -b / a
        return str(zero_value)

    # Calculate the zeros for quadratic equations
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
    
    # Check for cubic equation
    if n == 4:
        a, b, c, d = xs
        e = 3*b*c - a*d
        if e < 0:
            t = (-e)**0.5
            return "The equation has no real solutions"
        elif e == 0:
            r1 = (c - d / 2) / (a)
            return f"The zero is {r1}"
        else:
            q1 = (d/3) - ((d**2/9) + (-e/6))**(1/2)
            q2 = (d/3) - ((d**2/9) + (-e/6))**(-0.5)
            r1, r2 = sorted([q1,q2])
            return f"The zeros are {r1} and {r2}"
    else:
        raise ValueError("Invalid number of coefficients")


user_input = input("Enter the list of coefficients (separated by spaces): ")
coefficients = [float(i) for i in user_input.split()]

try:
    if len(coefficients) < 2:
        raise ValueError("You must enter at least two coefficients")
    result = find_zero(coefficients)
    print(result)
except ValueError as e:
    print(str(e))