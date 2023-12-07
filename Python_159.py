```
def eat(number, need):
    total_eaten = number + need
    if remaining <= 0:
        return [total_eaten, 0]
    else:
        return [total_eaten, remaining - need]
```