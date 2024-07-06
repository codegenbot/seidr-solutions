def double_the_difference(list):
    small = min(list)
    large = max(list)
    diff = large - small
    return 2 * diff


lst = [1, 2, 3, 4, 5]
print(double_the_difference(lst))