def eat(number, need, remaining):
    total = number + need
    left = max(remaining - need, 0) if need <= remaining else 0
    return [total]