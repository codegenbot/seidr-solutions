
```
def eat(number, need, extra):
    total_eaten = number + need
    carrots_left = max(0, extra - need)
    return [total_eaten, carrots_left]
```