def leaders(integers):
    return [
        integer
        for integer in integers[::-1]
        if all(i <= integer for i in integers[integers.index(integer) + 1 :])
    ]