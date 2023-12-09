def find_zero(xs):
    # ...
```
def find_zero(xs):
    x = 0
    for i in range(len(xs)):
        if xs[i] != 0:
            x += xs[i] * pow(x, i)
    return x
```