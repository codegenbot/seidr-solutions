def double_the_difference(array):
    odd_sum = sum(x ** 2 for x in array if x % 2 != 0 and x >= 0 and isinstance(x, int))
    return odd_sum