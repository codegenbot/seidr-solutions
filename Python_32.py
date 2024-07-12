def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[-1]
    b = xs[-2]
    return -b / a


# Read input from the user
values = list(map(float, input().split()))

# Output the result
print(find_zero(values))