def cut_vector(lst):
    if len(lst) == 1:
        return lst[0], []

    left_sum = sum(lst[: len(lst) // 2])
    right_sum = sum(lst[len(lst) // 2 :])

    if left_sum >= right_sum:
        return lst[: len(lst) // 2 + 1], lst[len(lst) // 2 :]
    else:
        return lst[: len(lst) // 2], lst[len(lst) // 2 :]