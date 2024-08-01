def sort_third(l: list):
    return [
        l[i - 1] if i % 3 != 0 else sorted([x for x in l[:i] if x % 3 != 0])[::-1]
        for i in range(1, len(l) + 1)
    ]