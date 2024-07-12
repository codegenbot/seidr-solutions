def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[-1]
    b = xs[-2]
    return -b / a

# Prompt the user to enter a list of integers separated by spaces
print("Enter a list of integers separated by spaces:")

# Read a list of integers from the user
xs = list(map(int, input().split()))

# Call the function and print the result
print(find_zero(xs))