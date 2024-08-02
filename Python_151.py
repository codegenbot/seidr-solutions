def double_the_difference(lst):
    return sum(i**2 for i in lst if isinstance(i, int) and i > 0) * 2


print(double_the_difference([1, 4, -3, 6]))