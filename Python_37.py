return [
    l[j % 2] if i < len(l) else (sorted([x for x in l[1::2]]))[i // 2]
    for i, j in enumerate(range(len(l)))
]