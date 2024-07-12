def sort_third(lst):
    return sorted([(i, x) for i, x in enumerate(lst)], key=lambda x: x[1])

user_input = input("Enter a list of numbers separated by comma: ")
user_input = [int(i) for i in user_input.split(",")]
print(sort_third(user_input))