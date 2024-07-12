```
def check(lst1, lst2):
    if double_the_difference(lst1) == double_the_difference(lst2):
        return "The lists are equivalent."
    elif double_the_difference(lst1) > double_the_difference(lst2):
        return "List1 is greater."
    else:
        return "List2 is greater."