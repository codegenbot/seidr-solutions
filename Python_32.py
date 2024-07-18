def find_zero(xs: list):
    x = -xs[0] / xs[1]
    return x


# Read input from user
input_list = list(map(int, input().split()))

# Call the function with the input list
result = find_zero(input_list)
print(result)