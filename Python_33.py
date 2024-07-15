def sort_third(l: list):
    return [
        sorted(l[i + j : i + j + 3])
        for i in range(0, len(l), 3)
        for j in range(3)
        if i + j + 3 <= len(l)
    ]