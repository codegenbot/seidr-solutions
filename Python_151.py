```
def double_the_difference(lst):
    result = sum(i**2 for i in lst if isinstance(i, int) and i > 0)
    return 2 * (result - min(lst))

list1 = [1, 2, 3]
list2 = [-4, 5, -6]

check(double_the_difference(list1))
check(double_the_difference(list2))