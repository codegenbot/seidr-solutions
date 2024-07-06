def any_int(x, y, z):
   x = int(x)
   y = int(y)
   z = int(z)
    if x + y == z or x + z == y or y + z == x:
        return True
    else:
        return False