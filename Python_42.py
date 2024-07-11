def incr_list(l: list):
    return [i+1 for i in l]

user_input = input("Please enter a list of numbers separated by spaces: ")
user_list = [int(x) for x in user_input.split()]
print(incr_list(user_list))