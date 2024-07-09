def sort_even(lst):
    return [
        x if i % 2 != 0 else y
        for i, x in enumerate(sorted(lst))
        for j, y in enumerate(lst)
        if (j + 1) % 2 == 0
    ]