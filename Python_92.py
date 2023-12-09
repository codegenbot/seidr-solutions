```
def any_int(x: float, y: float, z: float) -> bool:
    if x == y + z or y == x + z or z == x + y:
        return True
    else:
        return False
```
or 
```
def any_int(x: int, y: int, z: int) -> bool:
    if x == y + z or y == x + z or z == x + y:
        return True
    else:
        return False
```