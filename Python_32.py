def find_zero(xs: list):
    n = len(xs) - 1
    return -xs[n - 1] / xs[n]

# Read input from the user
xs = list(map(int, input().split()))

# Call the function with the input
result = find_zero(xs)

# Print the result
print(result)