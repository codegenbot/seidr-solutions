def double_the_sum_of_squares(lst):
    return (sum(i for i in lst) ** 2) - sum(
        i**2 for i in lst if isinstance(i, int) and i > 0
    )