def sort_third(l: list) -> list:
    l += [0] * (3 - len(l) % 3)
    return [
        sorted(sublist, key=lambda x: x if isinstance(x, int) else x[2] if isinstance(x, tuple) else x, reverse=True)
        for sublist in [
            l[i : i + 3] for i in range(0, len(l), 3)
        ]
    ]