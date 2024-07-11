def double_the_difference(lst):
    even_sum = sum(i for i in lst if isinstance(i, int) and i >= 0 and i % 2 == 0)
    odd_sum = sum(i**2 for i in lst if isinstance(i, int) and i >= 0 and i % 2 != 0)
    return abs(even_sum - odd_sum)

result = double_the_difference([1, 2, -3, 4, -5])