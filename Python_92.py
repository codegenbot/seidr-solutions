```
def any_int(x: float, y: float, z: float):
    if x == y + z or y == x + z or z == x + y:
        return True
    else:
        return False

# Test case 1
assert any_int(3.0, 4, 7) == False

# Test case 2
assert any_int(3, 4, 7) == True
```