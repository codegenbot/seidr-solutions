def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[-1]
    b = xs[-2]
    x = -a / b
    return x

# Read input from user
xs = list(map(int, input().split()))

# Call the function and print the result
print(find_zero(xs)) 