```
def double_the_difference(lst):
    odd_sum = sum(i**2 for i in lst if isinstance(i, int) and i >= 0 and i % 2 != 0)
    even_sum = sum(i for i in lst if isinstance(i, int) and i >= 0 and i % 2 == 0)
    return 2 * odd_sum - even_sum

check(double_the_difference([1, 3, 5]))