def double_the_difference(lst):
    even_sum = sum(i for i in lst if isinstance(i, int) and i % 2 == 0)
    odd_sum = sum(i for i in lst if isinstance(i, int) and i > 0)
    return (even_sum - odd_sum) * 2