def leaders(integers):
    return [
        integer
        for integer in reversed(integers)
        if all(x <= integer for x in integers[integers.index(integer) + 1 :])
    ]