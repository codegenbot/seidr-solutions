def any_int(x, y, z):
    return (x + y == z) or (y + z == x) or (z + x == y) and isinstance(x, int) and isinstance(y, int) and isinstance(z, int)