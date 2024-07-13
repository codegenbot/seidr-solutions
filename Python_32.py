```
def find_zero():
    xs = input("Enter coefficients of quadratic equation (a b c): ")
    a, b, c = map(float, xs.split())
    if abs(a) < 1e-10:
        return "The equation is not quadratic"
    d = b**2 - 4*a*c
    if d < 0:
        return "No real solutions exist"
    if d == 0:
        x = -b / (2 * a)
        return f"The zero is {x}"
    else:
        x1 = (-b + d**0.5) / (2 * a)
        x2 = (-b - d**0.5) / (2 * a)
        return f"The zeros are {x1} and {x2}"