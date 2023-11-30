def read_input():
    n = int(input().strip())
    coeffs = list(map(float, input().strip().split()))
    x = float(input().strip())
    return coeffs, x


def find_zero(coeffs, x):
    eps = 1e-9
    max_iter = 1000
    guess = x
    for _ in range(max_iter):
        f = sum([coeffs[i] * guess ** (len(coeffs) - 1 - i) for i in range(len(coeffs))])
        f_prime = sum([(len(coeffs) - 1 - i) * coeffs[i] * guess ** (len(coeffs) - 2 - i) for i in range(len(coeffs) - 1)])
        delta = f / f_prime
        guess -= delta
        if abs(delta) < eps:
            return guess
    return None


coeffs, x = read_input()
result = find_zero(coeffs, x)
print(result)