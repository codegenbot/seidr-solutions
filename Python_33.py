```
def sort_third(l: list):
    return [
        (
            x
            if i % 3 != 0 or i >= len(l) - (i % 3)
            else (sorted([y for y in l[:i // 3 * 3 + i % 3 :]]))[-1] if i // 3 * 3 + i % 3 < len(l) else None
        )
        for i, x in enumerate(l)
    ]