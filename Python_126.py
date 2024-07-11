def is_sorted(lst):
    return all(lst[i] <= lst[i + 1] for i in range(len(lst) - 1)) and len(
        set(lst)
    ) == len(lst)