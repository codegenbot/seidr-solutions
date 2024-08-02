def sort_even(l: list):
    sorted_list = sorted([(x, y) for x, y in zip(l[1::2], l[::2])])
    return [
        x if i % 2 != 0 else y
        for i, ((_, x), (_, y)) in enumerate(zip(range(len(l)), repeat(sorted_list)))
    ]