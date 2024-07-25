def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[-1]
    b = xs[-2]
    return -b / a

# Prompt for input
print("Enter a list of numbers separated by space:")

# Call the function with input
result = find_zero(list(map(float, input().split())))
print(result)