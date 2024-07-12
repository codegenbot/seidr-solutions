```
def sort_third(lst):
    lst = [x for x in set(lst)]  
    return sorted([(i, x) for i, x in enumerate(lst)], key=lambda x: (x[1], (x[1] not in lst[:lst.index(x[1])][:2])))

user_input = input("Enter a list of numbers separated by comma: ")
user_input = [int(i) for i in user_input.split(",")]
print(sort_third(user_input))