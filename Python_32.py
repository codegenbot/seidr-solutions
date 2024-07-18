def find_zero(xs: list):
    x = -xs[0] / xs[1]
    return x

# Read input
xs = [int(input()), int(input())]

# Call the function and print the result
print(find_zero(xs))