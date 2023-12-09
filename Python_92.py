```
def any_int(x, y, z):
    if int(x) == int(y + z) or int(y) == int(x + z) or int(z) == int(x + y):
        return True
    else:
        return False
```