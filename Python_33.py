def sort_third(l):
    return [
        (i if i % 3 != 0 else min(x for x in l[: i + 1] if x % 3 != 0))
        for i in range(len(l))
    ]