def double_the_difference(lst):
    if len(lst) < 2:
        return 0
    half_sum = sum(lst[:len(lst)//2]) - sum(lst[len(lst)//2:])
    return abs(half_sum) * 2