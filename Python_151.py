def double_the_difference(lst):
    small = min(lst)
    large = max(lst)
    diff = large - small
    return 2 * diff


def check(lst):
    assert double_the_difference(lst) == odd_sum, "Your answer is incorrect."


# Test case
lst = [1, 3, 5]
check(lst)