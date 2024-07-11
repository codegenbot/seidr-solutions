def sort_third(l: list):
    return [
        x if i % 3 != 0 else x
        for i, x in enumerate(
            sorted([x for _ in range(len(l) // 3) for x in l[i : i + 3]])
        )
    ]