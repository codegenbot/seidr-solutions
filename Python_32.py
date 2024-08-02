def find_zero(xs: list):
    a, b = xs[-1], xs[-2]
    return 0 if a == 0 else -b / a

# Read input from the user
input_list = list(map(int, input().split()))

# Call the function with input_list
result = find_zero(input_list)
print(result)