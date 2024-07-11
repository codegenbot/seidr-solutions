def check(lst):
    even_sum = sum(i**2 for i in lst if isinstance(i, int) and i % 2 == 0)
    return double_the_difference([i for i in lst if isinstance(i, int) and i % 2 != 0]) - even_sum