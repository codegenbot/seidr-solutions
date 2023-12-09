
```
def eat(number, need):
    total_eaten = number + need
    carrots_left = max(0, number - need)
    return [total_eaten, carrots_left]
```