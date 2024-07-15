def sort_third(l: list):
    return [
        sorted(l[i : i + 3], key=lambda x: x if isinstance(x, int) else x[2])
        for i in range(0, len(l), 3)
        if i + 2 < len(l)
    ]