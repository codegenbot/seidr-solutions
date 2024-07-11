```
def sort_third(l: list):
    indexed_list = {x:i for i,x in enumerate(l)}
    return [
        x if i % 3 != 0 else sorted([y for y in l if (indexed_list[y]) % 3 != 0])[0]
        for i, x in enumerate(l)
    ]