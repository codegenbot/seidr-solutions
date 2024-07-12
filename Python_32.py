def find_zero(xs: list):
    a = xs[-1]
    b = xs[-2]
    return -b / a

# Read a list of integers from the user
xs = list(map(int, input().split()))

# Call the function and print the result
print(find_zero(xs))