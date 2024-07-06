def any_int(x: int, y: int, z: int):
    if isinstance(x, float) or isinstance(y, float) or isinstance(z, float):
        raise ValueError("All inputs must be integers.")
    return True if x + y == z or x + z == y or y + z == x else False