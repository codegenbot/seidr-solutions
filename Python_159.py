def eat(number, need, remaining):
    total = number + need
    left = max(remaining - need, 0)
    return [total, left]