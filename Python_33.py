def sort_third(lst: list) -> tuple:
    even = sorted([x for i, x in enumerate(lst) if i % 2 == 0])
    odd = sorted([x for i, x in enumerate(lst) if i % 2 != 0])
    return tuple(even), tuple(odd)