def any_int(x, y, z):
    return (isinstance(x, int) and isinstance(y, int) and isinstance(z, int)) and (
        x == y + z or x == y - z or x == z - y
    )