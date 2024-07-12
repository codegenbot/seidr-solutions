def is_sorted(lst):
    return len(set(lst)) == len(lst) and all(
        lst[i] <= lst[i + 1] for i in range(len(lst) - 1)
    )