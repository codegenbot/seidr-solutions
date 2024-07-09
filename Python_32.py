def find_zero(xs: list):
    a, b = xs[0], xs[1]
    return -b / a

# Read input from the user
input_values = list(map(float, input().split()))

# Call the function with input values and print the output
print(find_zero(input_values))