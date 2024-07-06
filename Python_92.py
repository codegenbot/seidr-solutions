def any_int(x, y, z):
    return (
        (x == y + z or x == y - z or x == y + z or x == y - z)
        and isinstance(x, int)
        and isinstance(y, int)
        and isinstance(z, int)
    )