def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[-1]
    b = xs[-2]
    return -b / a

user_input = input("Enter a list of numbers separated by spaces: ")
user_list = [float(num) for num in user_input.split()]

result = find_zero(user_list)
print(result)