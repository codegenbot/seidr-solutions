def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[-1]
    b = xs[-2]
    return -b / a

# Input
xs = list(map(float, input().strip().split()))

# Call the function
result = find_zero(xs)
print(result)