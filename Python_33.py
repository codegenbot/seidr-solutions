def sort_third(l: list):
    sorted_list = sorted((x for pair in zip(l, range(len(l))) for x, _ in (pair,)))[::3]
    return [x if i % 3 != 0 else sorted_list[i] for i, x in enumerate(sorted_list)]