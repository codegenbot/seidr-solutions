def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[-1]
    b = xs[-2]
    return -b / a

# Read input as a list of integers
xs = list(map(int, input().split()))

# Call the function with the input list and print the result
print(find_zero(xs))