def double_the_difference(lst1, lst2):
    return sum(i**2 for i in lst1 if isinstance(i, int) and i >= 0 and i % 2 != 0)