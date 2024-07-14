def leaders(integers):
    return [
        i
        for i in integers[::-1]
        if all(j <= i for j in integers[integers.index(i) + 1 :])
    ]