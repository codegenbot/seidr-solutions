```
def double_the_difference(lst):
    odd_sum = sum(i ** 2 for i in lst if isinstance(i, int) and i >= 0 and i % 2 != 0)
    if double_the_difference(lst) == odd_sum:
        return True
    else:
        return False