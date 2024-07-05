```
def find_zero(xs: list):
    if len(xs) < 3:
        return None
    for i in range(len(xs)-2):
        A = xs[i]
        B = xs[i+1]
        C = xs[i+2]
        d = (B**2 - 4*A*C)**0.5
        r1 = (-B + d) / (2 * A)
        r2 = (-B - d) / (2 * A)
        if abs(r1) < 10e-9:
            return r1
        elif abs(r2) < 10e-9:
            return r2
    return None