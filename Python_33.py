def sort_third(l: list):
    return sorted([
        sorted(l[i:i+3])
        for i in range(0, len(l), 3)
        if i + 2 < len(l)
    ], key=lambda x: x[2])