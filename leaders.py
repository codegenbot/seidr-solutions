def leaders(integers):
    return [
        integer
        for integer in reversed(integers)
        if all(integer >= x for x in integers[integers.index(integer) + 1 :])
    ]