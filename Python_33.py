def sort_third(l: list):
    return [
        (
            tuple(sorted([x for x in subl if i % 3 != 0]))
            if i % 3 == 2
            else tuple(sorted(subl))
        )
        for i, subl in enumerate(zip(*[sublist[i::3] for sublist in l]))
    ]