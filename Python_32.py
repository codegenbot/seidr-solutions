def find_zero(xs: list):
    n = len(xs) - 1
    a = xs[-1]
    b = xs[-2]
    return -a / b

user_input = input("Enter a list of numbers separated by spaces: ")
input_list = [int(num) for num in user_input.split()]

result = find_zero(input_list)
print(result)