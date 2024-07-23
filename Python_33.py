def sort_third(l: list):
    return sorted(
        l,
        key=lambda x: (
            x if l.index(x) % 3 else min(i for i in range(len(l)) if i % 3 != 0)
        ),
    )