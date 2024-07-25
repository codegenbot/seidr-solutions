def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[-1]
    b = xs[-2]
    return -a / b

# Receive input from the user
xs = list(map(int, input().split()))

# Call the function with user input
result = find_zero(xs)
print(result)