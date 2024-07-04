import math

def find_zero(xs: list):
    def f(x):
        return sum([coeff * math.pow(x, i) for i, coeff in enumerate(xs)])

    def derivative(xs):
        return [i * coeff for i, coeff in enumerate(xs)][1:]

    def f_prime(x):
        return sum([coeff * math.pow(x, i) for i, coeff in enumerate(derivative(xs))])

    x0 = 0
    epsilon = 1e-7
    max_iter = 1000
    for _ in range(max_iter):
        y = f(x0)
        if abs(y) < epsilon:
            return x0
        y_prime = f_prime(x0)
        if y_prime == 0:
            break
        x0 = x0 - y / y_prime
    return x0

# Reading input from user
if __name__ == "__main__":
    import sys
    input = sys.stdin.read
    xs = list(map(float, input().strip().split()))
    print(find_zero(xs))