```python
import math

def poly(xs: list, p: float):
    result = 0
    for i in range(len(xs)):
        result += xs[i] * (p ** (len(xs) - 1 - i))
    return result

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        return None
    max_coeff = max([abs(coeff) for coeff in xs])
    idx = xs.index(max_coeff)
    p = poly(xs, -max_coeff / xs[idx])
    while math.isclose(poly(xs, p), 0, abs_tol=1e-6):
        if len(xs) == 2:
            return round(p, 2)
        max_coeff = max([abs(coeff) for coeff in xs])
        idx = xs.index(max_coeff)
        p = poly(xs, -max_coeff / xs[idx])
    return round(p, 2)

if __name__ == "__main__":
    xs = [1, 2, 3]  # input your list here
    result = find_zero(xs)
    print(result)