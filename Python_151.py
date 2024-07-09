def double_the_difference(lst):
    positive_integers = [x**2 for x in lst if isinstance(x, int) and x >= 0]
    total_sum = sum([x for x in lst if isinstance(x, int)])
    odd_numbers_sum = sum([x for x in lst if isinstance(x, int) and x % 2 != 0])
    return 2 * (total_sum - odd_numbers_sum) - sum(positive_integers)