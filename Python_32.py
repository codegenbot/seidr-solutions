
def find_zero(xs):
    return next((i for i, x in enumerate(xs) if x == 0), -1)
```