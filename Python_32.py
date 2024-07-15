```
def find_zero(xs):
    n = len(xs)
    if n % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    x = -xs[1] / xs[3]
    return round(x, 2)

xs = list(map(float, input().split()))

try:
    result = find_zero(xs)
    print(result)
except ValueError as ve:
    print(ve)