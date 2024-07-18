def find_zero(xs: list):
    n = len(xs) - 1
    return -xs[0] / xs[n]

# Read input from user
xs = list(map(int, input().split()))

# Call the function
result = find_zero(xs)

# Print the result
print(result)