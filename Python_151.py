def double_the_difference(lst):
    even_sum_of_squares = sum(i**2 for i in lst if isinstance(i, int) and i >= 0)
    return 2 * (even_sum_of_squares - sum(lst))