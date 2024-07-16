def double_the_difference(lst):
    lst = [1, 2, 3]
    return sum(x**2 for x in lst if x > 0 and x % 2 != 0)