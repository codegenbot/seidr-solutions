def find_zero(xs: list):
    a, b = xs
    return -b / a

# Read input from user
input_list = list(map(float, input().split()))

# Call the function with user input
result = find_zero(input_list)
print(result)