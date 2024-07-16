def find_zero(xs: list):
    a = xs[-1]
    b = xs[-2]
    return -b / a

# Read input from the user
xs = list(map(float, input().split()))

# Call the function with the input list
result = find_zero(xs)
print(result)