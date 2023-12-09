```
def any_int(x: float, y: float, z: float) -> bool:
    if x == int(y + z) or y == int(x + z) or z == int(x + y):
        return True
    else:
        return False
```