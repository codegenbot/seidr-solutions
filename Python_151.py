def double_the_difference(list):
    odd_sum = sum(x**2 for x in list if x > 0 and isinstance(x, int) and x % 2 != 0)
    return odd_sum * 2