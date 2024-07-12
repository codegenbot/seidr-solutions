def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        return None
    max_coeff = max(xs, key=abs)
    x = -max_coeff / xs[-1]
    return x

coefficients = list(map(float, input().split()))
result = find_zero(coefficients)
print(result)