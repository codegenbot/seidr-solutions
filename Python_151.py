def double_the_difference(lst):
    return sum(i ** 2 for i in lst if isinstance(i, int) and i > 0)

print(double_the_difference([1, 3, -5, 4, 0]))