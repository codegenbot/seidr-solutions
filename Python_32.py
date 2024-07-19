def find_zero(xs: list):
    if len(xs) % 2 != 0:
        raise ValueError("Number of coefficients must be even.")

    n = len(xs) - 1
    a = xs[-1]
    b = xs[-2]

    if a == 0:
        return 0

    return -b / a

# Read input
coefficients = list(map(float, input().split()))

# Call function
result = find_zero(coefficients)
print(result)