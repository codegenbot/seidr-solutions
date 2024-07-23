```
def check(lst):
    if len(set(lst)) == 1:
        return "The list contains all the same numbers"
    elif len(lst) == len(set(lst)):
        return "The list is a set of unique numbers"
    else:
        return "The list contains duplicate numbers"

your_list = [1, 2, 3, 4]
result = check(your_list)
print(result)