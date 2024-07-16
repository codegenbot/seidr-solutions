def sort_third(l: list):
    padding = 3 - len(l) % 3
    l += [None] * padding
    return [sorted([x for x in l[i : i + 3] if x is not None]) for i in range(0, len(l), 3]

print(sort_third([5, 6, 3, 4, 8, 9, 2, 1]))