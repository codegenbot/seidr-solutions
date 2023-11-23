import math

def poly(xs: list, x: float) -> float:
    return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

num_coeffs = int(input())
coeffs = [float(input()) for _ in range(num_coeffs)]
xs = coeffs

result = poly(coeffs, 0)
print(result)

def find_zero():
    low = -1000
    high = 1000
    while abs(high - low) > 1e-9:
        mid = (low + high) / 2
        if poly(xs, mid) == 0:
            return mid
        elif poly(xs, mid) * poly(xs, low) < 0:
            high = mid
        else:
            low = mid
    return (low + high) / 2

def check(func):
    return func()

check(find_zero)