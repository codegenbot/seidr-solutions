def leaders(integers):
    return [
        i
        for i in reversed(integers)
        if all(j <= i for j in integers[integers.index(i) + 1 :])
    ]