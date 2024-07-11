def sort_even(lst):
    return [
        x if i % 2 != 0 else sorted([y for j, y in enumerate(lst) if (j := i) // 2 * 2 == j])[0]
        for i, x in enumerate(lst)
    ]