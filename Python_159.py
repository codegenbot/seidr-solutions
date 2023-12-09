

def eat(number, need, extra):
    total_eaten = number + need
    carrots_left = max(0, remaining - need)
    return [total_eaten, carrots_left]
```
check(eat)
assert eat(4, 5) == [5, 0], "Error"
```