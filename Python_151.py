def double_the_difference(lst):
    odd_sum = sum(x for x in lst if x > 0 and isinstance(x, int) and x % 2 != 0)
    even_sum = sum(x for x in lst if x > 0 and isinstance(x, int) and x % 2 == 0)
    return 2 * (odd_sum - even_sum)