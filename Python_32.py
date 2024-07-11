```
def find_zero(xs):
    if len(xs) % 2 != 1:
        return "Error: xs must start with 0"
    sum_coeffs = 0
    for i in range(len(xs)):
        if i == 0:
            sum_coeffs += xs[i]
        else:
            sign = -1 if i % 2 == 0 else 1
            sum_coeffs += sign * xs[i]
    return -sum_coeffs / (xs[0] + sum_coeffs) if abs(sum_coeffs) > abs(xs[0]) else None