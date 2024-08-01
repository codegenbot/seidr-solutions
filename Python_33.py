```
def sort_third(l: list):
    result = [
        val if i % 3 != 0 else sorted([x for j in range(len([x for x in l if i % 3 == 0])) for k, x in enumerate([x for x in l if i % 3 == 0]) if k == j])[0]
        for i, val in enumerate(l)
    ]
    return result