def leaders(integers):
    return [
        integer
        for integer in reversed(integers)
        if all(i <= integer for i in integers[integers.index(integer) + 1 :])
    ]