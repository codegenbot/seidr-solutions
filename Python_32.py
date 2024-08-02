def find_zero(xs: list):
    a, b = xs[-1], xs[-2]
    return 0 if a == 0 else -b / a


# Input parsing
input_list = list(map(int, input().split()))
# Call the function with the input list
result = find_zero(input_list)
# Print the result
print(result)