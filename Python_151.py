def double_the_difference(lst, odd_sum):
    return sum(x**2 for x in lst if x > 0 and x % 2 != 0) * 2 if odd_sum else sum(x**2 for x in lst if x > 0 and x % 2 != 0)