def double_the_difference(lst):
    odd_sum = 0
    for i in lst:
        if isinstance(i, int) and i >= 0 and i % 2 != 0:
            odd_sum += i**2
    return odd_sum