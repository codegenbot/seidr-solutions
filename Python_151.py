def double_the_difference(list):
    small = min(list)
    large = max(list)
    diff = large - small
    return 2 * diff


# call the function with a list of four integers as input
print(double_the_difference([1, 2, 3, 4]))