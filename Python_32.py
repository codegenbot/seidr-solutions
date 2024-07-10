def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[0]
    b = xs[n]
    return -a / b

# Take input from the user
input_list = list(map(float, input("Enter comma-separated numbers: ").split(','))

# Call the find_zero function with the input list
result = find_zero(input_list)
print(result)