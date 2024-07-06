def sort_third(l):
    return [
        sorted(l[i : i + 3]) if i + 2 < len(l) else sorted(l[i : i + 2])
        for i in range(0, len(l), 3)
    ]