def sort_third(l: list):
    return [sorted([x for x in l[: i + 1] if x % 3 == 0])[::-1] for i in range(len(l))]