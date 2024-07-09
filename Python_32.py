def find_zero(xs: list):
    n = len(xs) - 1
    if n % 2 != 0:
        return None
    a = xs[-1]
    b = xs[-2]
    return -a / b


# Input list from the user
xs = list(map(float, input().split()))

# Call the function
result = find_zero(xs)
print(result)