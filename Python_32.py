```
def find_zero(xs):
    if len(xs) % 2 != 0:
        return "Error: xs must be an even number"
    leading_zero = 0
    for x in xs[1:]:
        if x != 0:
            return "Error: xs must start with zeros and followed by non-zero coefficients"
        leading_zero += x
    max_coeff = max(abs(x) for x in xs[1:])
    return -xs[-1] / (2 * leading_zero) if abs(leading_zero) == max_coeff else None

xs = list(map(int, input("Enter your numbers separated by spaces: ").split()))
result = find_zero(xs)
print(result if result is not None else "Invalid input")