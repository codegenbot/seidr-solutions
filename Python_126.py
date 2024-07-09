def is_sorted(lst):
    return len(lst) == len(set(lst)) and all(
        lst[i] <= lst[i + 1] for i in range(len(lst) - 1)
    )