```
def eat(number, need):
    total = number + need
    if total <= 0:
        left = 0
    else:
        left = max(total - need, 0)
    return [total, left]
```