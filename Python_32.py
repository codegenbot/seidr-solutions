def find_zero(xs: list):
    n = len(xs)
    a = xs[n-1]
    b = xs[n-2]
    return -b / a

# Read input from user
xs = list(map(float, input().strip().split()))

# Call the function with the input list
result = find_zero(xs)

# Print the result
print(result)