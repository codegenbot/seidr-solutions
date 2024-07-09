def any_int(x, y, z):
    return (
        x == y + z
        or x == y - z
        or x == y + z
        or y == x + z
        or y == x - z
        or y == x + z
        or z == x + y
        or z == x - y
    ) and all(isinstance(i, int) for i in [x, y, z])