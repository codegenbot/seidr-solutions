def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[-1]
    b = xs[-2]
    return -b / a


# Read input from user
user_input = input("Enter a list of numbers separated by spaces: ")
input_list = [float(x) for x in user_input.split()]

# Call the find_zero function with the input list
result = find_zero(input_list)
print(result)