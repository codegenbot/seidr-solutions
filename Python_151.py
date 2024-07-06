def double_the_difference(lst):
    small = min(lst)
    large = max(lst)
    diff = large - small
    return 2 * diff


double_the_difference([1, 2, 3])