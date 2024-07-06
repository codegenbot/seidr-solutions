def eat(number, need):
    total = number + need
    left = max(0, remaining - need) if need <= remaining else 0
    return [total, left]