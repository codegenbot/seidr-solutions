def double_the_difference(lst, odd_sum):
    return sum(x**2 for x in lst if x % 2 != 0) * 2 if sum(x for x in lst if x % 2 != 0) > odd_sum else 0