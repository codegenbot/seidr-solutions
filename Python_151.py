def double_the_difference(lst):
    small = min(lst)
    large = max(lst)
    diff = large - small
    return 2 * diff


# test your function with a list of numbers
double_the_difference([1, 3, 5, 7])  # should return 14