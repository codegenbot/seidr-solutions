```
def sort_third(l: list):
    return [
        (
            x
            if i % 3 != 0 or len(l) <= i // 3 * 3 + i % 3
            else (sorted([y for y in l[:min(i // 3 * 3 + i % 3, len(l))]]))[-1] if min(i // 3 * 3 + i % 3, len(l)) > i // 3 * 3 + i % 3 - 1 else None
        )
        for i, x in enumerate(l)
    ]