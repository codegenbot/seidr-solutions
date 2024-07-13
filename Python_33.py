def sort_third(lst: list):
    return sorted(
        [x for i, x in enumerate(lst) if (i + 1) % 3 != 0]
        or [lst[i - 1] for i in range(1, len(lst), 3)]
    )