def sort_third(l: list):
    return sorted(
        l,
        key=lambda x: (
            (x, i // 3) if i % 3 != 0 else (l[i - 1], l[i - 2]) if i > 2 else (x,)
        ),
    )