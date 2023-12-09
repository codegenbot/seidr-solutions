Solution:
```
def eat(number, need, remaining):
    if remaining <= 0:
        left = 0
        return [left]
    
    total = number + need
    left = max(total - remaining, 0)
    return [left]
```