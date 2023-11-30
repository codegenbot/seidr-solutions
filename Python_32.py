def read_input():
    n = int(input("Enter the number of coefficients: "))
    coeffs = list(map(float, input("Enter the coefficients separated by space: ").split()))
    x = float(input("Enter the value of x: "))
    return coeffs, x


def find_zero(coeffs, x):
    eps = 1e-9
    max_iter = 1000
    guess = x

    for _ in range(max_iter):
        f = 0.0

        for i in range(len(coeffs) - 1, -1, -1):
            f = f * guess + coeffs[i]

        f_prime = 0.0
        for i in range(len(coeffs) - 1, 0, -1):
            f_prime = f_prime * guess + i * coeffs[i]

        delta = f / f_prime
        guess -= delta

        if abs(delta) < eps:
            return guess

    return None


coeffs, x = read_input()
result = find_zero(coeffs, x)
print(result)