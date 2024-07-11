def sort_third(l: list):
    index_dict = {x: i for i, x in enumerate(l)}
    return [
        x if i % 3 != 0 else sorted([y for y in l if (index_dict[y]) % 3 != 0])
        for i, x in enumerate(l)
    ]