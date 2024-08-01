def find_zero(xs: list):
    a = xs[0]
    b = xs[1]
    x = -b / a
    return x

coefficients = list(map(float, input().split()))
result = find_zero(coefficients)
print(result)