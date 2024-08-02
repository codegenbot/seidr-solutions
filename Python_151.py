def double_the_difference(lst, odd_sum):
    return sum(2 * abs(x) for x in lst if x > 0 and x % 2 != 0) == odd_sum