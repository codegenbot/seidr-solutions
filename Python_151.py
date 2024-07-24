def double_the_difference(lst):
    even_sum = sum(i for i in lst if isinstance(i, int) and i % 2 == 0)
    odd_sum = sum(i**2 for i in lst if isinstance(i, int) and i % 2 != 0)
    return (2 * odd_sum) - even_sum