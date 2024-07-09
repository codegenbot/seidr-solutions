def find_zero(xs: list):
    n = len(xs)
    if n < 2:
        return "Input list should have at least 2 elements"
    a = xs[-1]
    b = xs[-2]
    return -b / a

# Read space-separated integers from user input
xs = list(map(int, input().strip().split()))

# Call the function with user input
result = find_zero(xs)
print(result)