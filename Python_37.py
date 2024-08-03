def sort_even(lst):
    return [x if i % 2 != 0 else sorted([y for y in lst if (i // 2) * 2 <= lst.index(y) < ((i // 2) + 1) * 2])[0] for i, x in enumerate(lst)]