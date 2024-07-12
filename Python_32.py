def find_zero(xs: list):
    a = xs[-1]
    b = xs[-2]
    x = -b / a
    return x

# Read input from the user
xs = [float(x) for x in input().split()]

# Call the function with user input
result = find_zero(xs)
print(result)