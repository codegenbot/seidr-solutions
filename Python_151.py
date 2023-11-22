def double_the_difference(lst):
    lst = sorted(lst)
    return sum(
        (lst[i + 1] - lst[i]) * 2
        for i in range(len(lst) - 1)
        if lst[i] > 0 and isinstance(lst[i], int) and lst[i] % 2 != 0
    )