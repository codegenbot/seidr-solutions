```
def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i > 0) * 2 - max(lst)

def check(lst1, lst2):
    if len(set(lst1)) == 1 and len(set(lst2)) == 1:
        return double_the_difference([*lst1, *lst2])
    else:
        return "Invalid input"