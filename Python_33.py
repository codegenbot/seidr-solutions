def sort_third(l: list):
    return [
        (
            val
            if i % 3 != 0
            else next((val for val in sorted(l[:i]) if val not in l[i : i + 2]), None)
        )
        for i, val in enumerate(l)
    ]