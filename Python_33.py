```
def sort_third(lst):
    return sorted([lst[i] for i in range(0, len(lst), 3)])

user_input = input("Enter a list of numbers separated by comma: ")
user_input = [int(i) for i in user_input.split(",")]
print(sort_third(user_input))