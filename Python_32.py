def find_zero(xs: list):
    if xs[1] == 0:
        return "Division by zero error"
    x = -xs[0] / xs[1]
    return x

# Read input from user as two integers from a single line
input_list = list(map(int, input().split()))

# Call the function with the input list
result = find_zero(input_list)
print(result)