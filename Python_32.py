def find_zero(xs: list):
    n = len(xs) - 1
    return -xs[n - 1] / xs[n]


# Read input list from user
input_list = list(map(int, input().split()))

# Call the function with the input list
result = find_zero(input_list)

# Print the result
print(result)