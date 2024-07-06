def double_the_difference(lst):
    small = min(lst)
    large = max(lst)
    diff = large - small
    return 2 * diff


# Test the function with the following code
print(double_the_difference([1, 2, 3]))  # Should be 4
print(double_the_difference([5, 7, 9]))  # Should be 16