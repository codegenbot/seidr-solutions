def check(lst):
    double_the_difference = lambda x: sum(i**2 for i in x if isinstance(i, int) and i >= 0)
    odd_sum = sum(1 for _ in lst if isinstance(_, int) and _ % 2 != 0)
    return double_the_difference(lst) == odd_sum