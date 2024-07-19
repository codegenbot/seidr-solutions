def double_the_difference(lst: list):
    return sum(x**2 for x in lst if x > 0 and x % 2 != 0)