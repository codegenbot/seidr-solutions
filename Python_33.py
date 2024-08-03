```
def sort_third(l: list):
    return [
        (
            x
            if i % 3 != 0
            else (sorted([y for y in l[: i // 3 * 3 + (i % 3 == 2) * 3 : i + 1]])[0] 
                 if len([y for y in l[: i // 3 * 3 + (i % 3 == 2) * 3 : i + 1]]) > 0 else None)
        )
        for i, x in enumerate(l)
    ]