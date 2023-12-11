```
def eat(number, need, remaining):
    total_eaten = number + need
    carrots_left = max(0, remaining - (total_eaten - number))
    return [total_eaten, carrots_left]
```