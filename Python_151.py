def check(lst):
    double_the_difference = lambda x: sum(i**2 for i in x if isinstance(i, int) and i >= 0)
    odd_sum = lst.count(1) + lst.count(3) + lst.count(5) + lst.count(7) + lst.count(9)
    return double_the_difference(lst) == odd_sum