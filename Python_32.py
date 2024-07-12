def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[-1]
    b = xs[-2]
    return -b / a


# Read input from user
user_input = input("Enter a list of numbers separated by space: ")
input_list = list(map(float, user_input.split()))

# Call the function with the input list
result = find_zero(input_list)
print(result)