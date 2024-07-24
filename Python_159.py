```
def eat(number, need, remaining):
    total = number
    r = min(need - number, remaining)
    return [total + r, max(0, remaining - r)]