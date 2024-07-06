def any_int(x, y, z):
    return (x == y + z or x == y - z or x == z - y) and all(
        isinstance(i, int) for i in [x, y, z]
    )