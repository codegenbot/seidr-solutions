def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[0]
    b = xs[n]
    return -a / b


# Read input from user
xs = list(map(float, input().split()))

# Call the function with the input
result = find_zero(xs)
print(result)