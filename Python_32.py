def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[-1]
    b = xs[-2]
    return -b / a

# Ask user to input coefficients
print("Enter space-separated coefficients (e.g. 2 3 for ax + b):")
input_list = list(map(float, input().split()))

# Call the function with the input
result = find_zero(input_list)

# Print the result
print(result)