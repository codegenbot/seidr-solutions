def any_int(x, y, z):
    return all(isinstance(num, int) for num in [x, y, z]) and any(
        num == x + y + z for num in [x, y, z]
    )