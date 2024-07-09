def double_the_difference(lst):
    odd_sum = sum(i**2 for i in lst if isinstance(i, int) and i % 2 != 0)
    return (sum(i**2 for i in lst if isinstance(i, int) and i > 0)) * 2 - max(lst)

odd_sum = double_the_difference([1, 2, 3])