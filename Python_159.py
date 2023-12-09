```
def eat(number, need, remaining):
    total = number + need
    if remaining <= 0:
        left = 0
    else:
        left = remaining - (total - number)
    return [total, left]
```