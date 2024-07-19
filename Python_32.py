def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[0]
    b = xs[-2]
    return -b / a


# Explicitly ask user for input
print("Enter space-separated coefficients:")
input_list = list(map(float, input().split()))

# Call the function with the input
result = find_zero(input_list)

# Print the result
print(result)