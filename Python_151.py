def double_the_difference(lst):
    small = min(lst)
    large = max(lst)
    diff = large - small
    return 2 * diff


def check(double_the_difference):
    lst = [1, 2, 3, 4, 5]
    assert double_the_difference(lst) == odd_sum