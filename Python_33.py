def sort_third(l: list):
    return [
        (
            sorted([l[i], l[i + 1], l[i + 2]])
            if len(l) % 3 != 1 and len(l) % 3 != 2 and i + 2 < len(l)
            else (
                sorted([l[i], l[i + 1]]) if len(l) % 3 == 2 and i + 1 < len(l) else l[i]
            )
        )
        for i in range(0, len(l), 3)
    ]