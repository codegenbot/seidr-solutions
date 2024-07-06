def any_int(x: int, y: int, z: int) -> bool:
    if isclose(x + y, z) or isclose(x + z, y) or isclose(y + z, x):
        return True
    else:
        return False