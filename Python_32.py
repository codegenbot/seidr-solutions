Here is the solution:

def find_zero(xs: list):
    if len(xs) % 2 != 0:
        return None
    max_coeff = max(abs(x) for x in xs)
    max_index = [i for i, x in enumerate(xs) if abs(x) == max_coeff][0]
    x = -xs[max_index] / (max_coeff * xs[1])
    return round(x, 2)