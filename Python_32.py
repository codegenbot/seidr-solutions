def find_zero(xs: list):
    a = xs[0]
    b = xs[1]
    return -b / (2*a)

coefficients = list(map(int, input().split()))
result = find_zero(coefficients)
print(result)