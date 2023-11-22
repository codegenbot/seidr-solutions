def sort_third(l: list) -> list:
    return [
        sorted(l[i : i + 3])
        for i in range(0, len(l), 3)
        if i + 2 < len(l)
    ]