def double_the_difference(lst):
    total = sum(i**2 for i in lst if isinstance(i, int) and i >= 0)
    return total * 2

check(lst=lst, function=double_the_difference)