```
def sort_third(l: list):
    return [
        (
            x
            if i % 3 != 0
            else l[i // 3 * 3 + (i % 3) - 1] if i < len(l) - 2 else x
        )
        for i, x in enumerate(l)
    ]