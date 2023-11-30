def find_zero(coefficients, x):
    return sum(coef * x**i for i, coef in enumerate(coefficients))

def read_input():
    n = int(input())
    coeffs = list(map(float, input().strip().split()))
    x = float(input())
    return coeffs, x

coeffs, x = read_input()
result = find_zero(coeffs, x)
print(result)