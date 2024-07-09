def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        return None
    a = max(xs, key=abs)
    b = -a
    return b

# Input
xs = list(map(int, input().split()))

# Calling the function
result = find_zero(xs)
print(result)