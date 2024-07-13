def sort_third(l: list):
    return [
        (
            tuple(sorted(x for x in subl if i % 3 == 2 or x < y))
            if i % 3 != 0
            else sorted((x for x in subl if i % 3 == 2 or x < y))
        )
        for i, subl, y in zip(range(len(l)), l, [subl[-1] for subl in l])
    ]