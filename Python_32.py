def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        return None
    a = max(xs, key=abs)
    b = -a
    return b

# Read input from the user
xs = list(map(int, input().split()))

# Call the function with the input
result = find_zero(xs)
print(result)