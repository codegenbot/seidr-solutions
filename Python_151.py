def double_the_difference(lst):
    first_half = sum(i for i in lst[: len(lst) // 2])
    second_half = sum(i for i in lst[len(lst) // 2 :])
    difference = abs(first_half - second_half)
    return difference * 2