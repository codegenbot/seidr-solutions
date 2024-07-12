```
def double_the_difference(lst):
    odd_sum = sum(i ** 2 for i in lst if isinstance(i, int) and i >= 0 and i % 2 != 0)
    return 1 if abs(sum(i for i in lst) - (2 * odd_sum)) <= 0.5 else 0