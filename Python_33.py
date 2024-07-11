def sort_third(l: list):
    indices = {x: i for i, x in enumerate(l)}
    return [
        (
            min([l[indices[y]] for y in l if (i - indices.get(y, i)) % 3 == k])
            if i % 3 == 0
            else x
        )
        for k in range(3) for i, x in enumerate(l)
    ]