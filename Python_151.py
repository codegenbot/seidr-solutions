```
def double_the_difference(lst):
    first_half_sum = sum(i for i in lst[:len(lst)//2] if isinstance(i, int) and i > 0)
    second_half_sum = sum(i for i in lst[len(lst)//2:] if isinstance(i, int) and i > 0)
    return abs(first_half_sum - second_half_sum) * 2