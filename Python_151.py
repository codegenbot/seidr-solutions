def double_the_difference(lst):
    diff = max(lst) - min(lst)
    return 2 * diff


print(double_the_difference([1, 2, -3, 4]))