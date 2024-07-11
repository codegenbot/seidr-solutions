def double_the_difference(lst):
    even_squares_sum = sum(
        i**2 for i in lst if isinstance(i, int) and i >= 0 and i % 2 == 0
    )
    total_sum = sum(i for i in lst if isinstance(i, int))
    return (total_sum - even_squares_sum) * 2