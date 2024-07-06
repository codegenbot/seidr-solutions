def double_the_difference():
    lst = list(range(1, 10))
    small = min(lst)
    large = max(lst)
    diff = large - small
    return 2 * diff


check(double_the_difference)