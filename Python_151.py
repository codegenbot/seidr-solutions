def double_the_difference(lst):
    lst = lst  # Input list
    return sum(x ** 2 for x in lst if x > 0 and x % 2 != 0)