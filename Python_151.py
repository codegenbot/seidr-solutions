def double_the_difference(lst):
    odd_sum = sum(i for i in lst if isinstance(i, int) and i > 0)
    return (odd_sum * 2) - max(lst)

double_the_difference([1, 3, -1])