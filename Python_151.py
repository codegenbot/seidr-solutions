def double_the_difference(lst):
    return sum((2*x for x in lst if x > 0 and x % 2 != 0)) if lst else 0