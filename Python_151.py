def double_the_difference(lst):
    odd_sum = sum(i**2 for i in lst if isinstance(i, int) and i % 2 != 0)
    return double_diff(odd_sum, len([i for i in lst if isinstance(i, int)]))


def double_diff(odd_sum, n):
    even_avg = (sum(i for i in lst if isinstance(i, int)) / n) * 2
    return abs(odd_sum - even_avg)