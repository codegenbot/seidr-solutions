def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[-1]
    b = xs[-2]
    return -b / a


print("Enter space-separated list of numbers:")
xs = list(map(float, input().split()))
result = find_zero(xs)
print(result)