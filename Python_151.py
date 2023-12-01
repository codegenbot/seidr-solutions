def double_the_difference(my_list):
    odd_sum = sum(x**2 for x in my_list if x > 0 and isinstance(x, int) and x % 2 != 0)
    return odd_sum * 2