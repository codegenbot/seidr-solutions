def double_the_difference(lst):
    return (
        sum(i**2 for i in lst if isinstance(i, int) and i >= 0 and i % 2 != 0)
    ) / ((sum(1 for i in lst if isinstance(i, int) and i >= 0 and i % 2 == 0)) or 1)