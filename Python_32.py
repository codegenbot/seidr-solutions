```
def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have an even number of coefficients")
    print("Enter the coefficients in the quadratic equation ax^2 + bx + c = 0, separated by spaces:")
    xs = list(map(float, input().split()))
    x = -xs[1] / xs[0]
    return round(x, 2)