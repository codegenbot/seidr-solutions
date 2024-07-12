def sort_third(lst):
    return sorted([i for i in lst if (lst.index(i) + 1) % 3 == 0])

user_input = input("Enter a list of numbers separated by comma: ")
user_input = [int(i) for i in user_input.split(",")]
print(sort_third(user_input))