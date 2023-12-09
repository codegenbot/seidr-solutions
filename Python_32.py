```
def find_zero(xs):
    x = xs[i]
    result = 0
    for i in range(len(xs)):
        if xs[i] == x:
            result += 1
    return result
```