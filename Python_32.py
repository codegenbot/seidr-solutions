def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[-1]
    b = xs[-2]
    return -a / b

# Read input from the user
inputs = list(map(float, input().split()))

# Call the function and print the output
print(find_zero(inputs))