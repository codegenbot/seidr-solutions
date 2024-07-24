```
import math
def find_zero(xs):
    if len(xs) % 2 != 0:
        raise ValueError("xs must have even number of coefficients")
    a = xs[-1]
    b_sum = sum(x for x in xs[:-1] if isinstance(x, (int, float)))
    c_sum = sum(x*y for x, y in zip(xs[:-1], range(len(xs)-1)) if isinstance(x, (int, float)) and isinstance(y, int))
    d_sum = sum(x*math.pow(y, 2) for x, y in zip(xs[:-1], range(len(xs)-1)) if isinstance(x, (int, float)) and isinstance(y, int))

    if a == 0:
        return "a cannot be zero"
    if b_sum == 0:
        b_sum = -sum(x*y for x, y in zip(xs[:-1], range(len(xs)-1)))
    x = (-b_sum + math.sqrt(b_sum**2 - 4*a*c_sum)) / (2*a)
    return round(x, 2)

xs = [float(x) for x in input("Enter coefficients separated by space: ").split()]
try:
    result = find_zero(xs)
except ValueError as e:
    print(f"Invalid input: {e}")
else:
    print(result)