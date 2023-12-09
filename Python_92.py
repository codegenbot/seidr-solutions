```
def any_int(x: float, y: float, z: float) -> bool:
    if x == y + z or y == x + z or z == x + y:
        return True
    else:
        return False
```