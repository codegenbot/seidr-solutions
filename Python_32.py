def find_zero(xs: list):
    a = xs[-1]
    b = xs[-2]
    return -b / a


print("Enter the coefficients separated by spaces:")
coefficients = list(map(int, input().split()))
result = find_zero(coefficients)
print(result)