def leaders(integers):
    return [
        x
        for x in reversed(integers)
        if all(x >= y for y in integers[integers.index(x) + 1 :])
    ]