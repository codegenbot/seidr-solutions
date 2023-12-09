```
def find_zero(xs):
    result = 0
    for i in range(len(xs)):
        if xs[i] == 0:
            result += 1
    return result
```