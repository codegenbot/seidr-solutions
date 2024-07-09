def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i > 0) * 2 - max(lst)


def check(lst1, lst2):
    return double_the_difference(lst1 + lst2)