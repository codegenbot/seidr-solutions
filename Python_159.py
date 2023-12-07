```
def eat(num_to_eat: int, carrots_left: int) -> (int, int):
    total_eaten = num_to_eat + carrots_left
    if carrots_left <= 0:
        carrots_left = 0
    else:
        carrots_left = max(0, carrots_left - num_to_eat)
    return [total_eaten, carrots_left]
```