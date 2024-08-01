def find_zero(xs: list):
    coefficients = list(map(int, input().split()))
    a = coefficients[-1]
    b = coefficients[-2]
    return -b / a

result = find_zero([])
print(result)