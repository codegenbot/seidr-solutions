def double_the_difference(lst):
    small = min(lst)
    large = max(lst)
    diff = large - small
    return 2 * diff


# Test the function
assert double_the_difference([4, 5, 7, 3]) == 16