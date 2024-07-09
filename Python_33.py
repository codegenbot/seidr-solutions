def sort_third(l: list):
    return [sorted(l[i : i + 3]) if i % 3 == 0 else [l[i]] for i in range(0, len(l), 3)]