def double_the_difference(original_list):
    odd_sum = sum(i**2 for i in original_list if isinstance(i, int) and i % 2 != 0)
    return 2*odd_sum - sum(i for i in original_list if isinstance(i, int))