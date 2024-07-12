def sort_third(lst):
    grouped = [(int(i) // 3, i[1]) for i in enumerate(map(int, lst))]
    grouped.sort()
    return [
        min(group[1:]) if group[0] % 3 != 0 else max(group[1:])
        for group in itertools.groupby(grouped, key=lambda x: (x[0]))
    ]