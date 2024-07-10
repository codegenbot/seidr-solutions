def check(lst):
    double_the_difference = lambda x: sum(i**2 for i in x if isinstance(i, int) and i >= 0)
    odd_sum = sum(i for i in lst if isinstance(i, int) and i % 2 != 0)
    return double_the_difference(lst) == odd_sum