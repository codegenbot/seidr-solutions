def double_the_difference(lst):
    return sum(abs(x) ** 2 for x in lst if x % 2 != 0) * 2