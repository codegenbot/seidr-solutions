def sort_third(l: list):
    indices = {x: i for i, x in enumerate(l)}
    return [
        (
            x
            if i % 3 != 0
            else min([l[indices[y]] for y in l if (i - indices.get(y, i)) % 3 != 0])
        )
        for i, x in enumerate(l)
    ]