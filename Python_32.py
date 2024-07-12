def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[-1]
    b = xs[-2]
    return -b / a

# Prompt the user to enter a list of numbers
user_input = input("Enter a list of numbers separated by spaces: ")
user_list = [float(num) for num in user_input.split()]

# Call the find_zero function with the user_list
result = find_zero(user_list)
print(result)