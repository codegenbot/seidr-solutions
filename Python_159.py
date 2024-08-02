```
def eat(number, need, remaining):
    total_eaten = min(number, need)
    left_carrots = max(0, remaining - (need - total_eaten))
    return [total_eaten, left_carrots]