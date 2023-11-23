def double_the_difference(lst):
    odd_sum = 0
    for x in lst:
        if isinstance(x, int) and x % 2 != 0:
            odd_sum += x ** 2
    return odd_sum