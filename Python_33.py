def sort_third(lst):
    return [
        x if i % 3 != 0 else sorted([y for _, y in enumerate(lst) if (i - _) % 3 != 0])
        for i, x in enumerate(lst)
    ]