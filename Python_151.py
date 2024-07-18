def double_the_difference(lst):
    odd_sum = sum(x for x in lst if x > 0 and x % 2 != 0)
    return odd_sum * 2