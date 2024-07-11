```
def sort_third(l: list):
    index_map = {x: i for i, x in enumerate(l)}
    return [
        x if i % 3 != 0 else min([y for y in l if (index_map[y] - index_map[x]) % 3 != 0])[0]
        for i, x in enumerate(l)
    ]