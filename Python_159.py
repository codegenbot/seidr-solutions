
Here's the fixed function:
```py
def eat(number, need, remaining):
    total = number + need
    if total > remaining:
        left = 0
    else:
        left = max(remaining - (total - number), 0)
    return [total, left]
```