def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[-1]
    b = xs[-2]
    return -b / a

# Read input from the user
input_list = [int(x) for x in input().split()]

# Call the find_zero function with the input list
result = find_zero(input_list)

print(result)