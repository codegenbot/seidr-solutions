def sort_even(l: list):
    index_dict = {x: i for i, x in enumerate(l)}
    return [
        x if i % 2 != 0 else sorted([y for y in l if index_dict[y] % 2 == 0])[
            (i // 2)
        ]
        for i, x in enumerate(l)
    ]