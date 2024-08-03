def double_the_difference(lst):
    even_squares_sum = sum(i ** 2 for i in lst if isinstance(i, int) and i % 2 == 0)
    return (min(lst) + max(lst)) * 2 - 2 * even_squares_sum