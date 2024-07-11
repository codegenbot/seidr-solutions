def sort_third(l: list):
    return [
        (
            x
            if i % 3 != 0 or i >= len(l) - (i % 3)
            else None if i // 3 * 3 + i % 3 >= len(l) else (sorted([y for y in l[:min(i // 3 * 3 + i % 3, len(l))]]))[-1]
        )
        for i, x in enumerate(l)
    ]