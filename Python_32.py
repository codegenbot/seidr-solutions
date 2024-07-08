```Python
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
        D = 3*(a*c-b**2)+(b**3-4*a*c*d)
        E = (27*b**2*d - 18*b*c*(c-a) + 3*(a-c)**2)*(d**2)
        if D == 0 and E > 0:
            return "The equation has one real solution"
        elif D < 0 and E > 0:
            r1 = ((-b+D**(1/3))/3/(2*a))**(1/2)
            r2 = ((-b-D**(1/3))/3/(2*a))**(1/2)
            return f"The zero is {r1}"
        elif D < 0 and E == 0:
            r1 = (-b+D**(1/3))/3/(2*a)
            return f"The zero is {r1}"
        else:
            r1 = ((-b+D**(1/3))/3/(2*a))**(1/2)
            r2 = (-(2*r1**2+b)/(4*a))
            return f"The zeros are {r1} and {r2}"

    if n > 4:
        raise ValueError("xs must have at most four coefficients")

user_input = input("Enter the list of coefficients (separated by spaces): ")
coefficients = [float(i) for i in user_input.split()]

try:
    if len(coefficients) < 2:
        raise ValueError("You must enter at least two coefficients")
    result = find_zero(coefficients)
    print(result)
except ValueError as e:
    print(str(e))