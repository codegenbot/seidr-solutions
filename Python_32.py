def find_zero(xs: list):
    n = len(xs) // 2
    a, b = xs[n], max(xs[:n] + xs[n + 1:])
    return -a / b

# Read input from the user
xs = list(map(int, input().split()))

# Call the function and print the result
print(find_zero(xs))