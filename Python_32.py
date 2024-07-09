import math

def find_zero(xs: list):
    def poly(xs: list, x: float):
        return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

    if len(xs) % 2 != 0:
        return None

    max_coeff = max(xs, key=abs)
    if max_coeff == 0:
        return None

    for i in range(len(xs)):
        if xs[i] == max_coeff:
            xs[i] = 0
            break

    return -max_coeff / xs[i]