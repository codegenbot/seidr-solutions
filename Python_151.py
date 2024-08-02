def double_the_difference(input_list):
    odd_sum = sum(i**2 for i in input_list if isinstance(i, int) and i >= 0 and i % 2 != 0)
    return 2 * odd_sum - sum(input_list)