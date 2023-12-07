Solution: Modify the `eat` function signature to take two arguments instead of three:
```
def eat(number, need):
    total_eaten = number + need
    carrots_left = max(0, remaining - need)
    if remaining <= 0:
        return [total_eaten, 0]
    else:
        return [total_eaten, carrots_left]
```