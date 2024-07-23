def any_int(x, y, z):
    return (
        x == y + z
        or x == y - z
        or x == z - y
        or y == z - x
        or y == z + x
        or z == x - y
        or z == x + y
    ) and all(isinstance(i, int) for i in [x, y, z])