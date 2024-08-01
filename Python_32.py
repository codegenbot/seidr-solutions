def find_zero(xs: list):
    a = xs[-2]
    b = xs[-1]
    return -b / a


coefficients = list(map(int, input().split()))
result = find_zero(coefficients)
print(result)