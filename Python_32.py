def find_zero(xs: list):
    return (xs[0] + xs[-1]) / 2


# Read input from the user
input_list = [float(x) for x in input().split()]
# Call the function with the input list and print the result
print(find_zero(input_list))