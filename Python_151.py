```
def double_the_difference(lst):
    result = (max(lst) - min(lst)) * 2
    for i in lst:
        if isinstance(i, int) and i > 0:
            result += i**2
    return result

list1 = [1, 2, 3]
list2 = [-4, 5, -6]

check(double_the_difference(list1))
check(double_the_difference(list2))