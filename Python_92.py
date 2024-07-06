
def any_int(x: int, y: int, z: int) -> bool:
    return (x + y == z) or (x + z == y) or (y + z == x)