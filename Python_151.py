def double_the_difference(lst):
    lst = [6, 5, 4, 3, 2, 1]
    return sum(x**2 for x in lst if x > 0 and x % 2 != 0)