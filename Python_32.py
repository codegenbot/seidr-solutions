import math

def poly(xs: list, x: float):
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

def find_zero(xs: list):
    def f(x):
        return poly(xs, x)
    
    a, b = -1000, 1000
    
    # Ensure initial interval is valid
    if f(a) * f(b) > 0:
        raise ValueError("Invalid interval: No sign change")

    while b - a > 1e-7:
        c = (a + b) / 2
        fc = f(c)
        if abs(fc) < 1e-7:
            return c
        elif f(a) * fc < 0:
            b = c
        else:
            a = c
    return (a + b) / 2

if __name__ == "__main__":
    xs = list(map(float, input().strip().split()))
    try:
        zero = find_zero(xs)
        print(zero)
    except ValueError as e:
        print(e)