def double_the_difference(input_list):
    odd_sum = sum(x**2 for x in input_list if isinstance(x, int) and x > 0 and x % 2 != 0)
    return odd_sum