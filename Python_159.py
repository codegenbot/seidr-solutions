def eat(number, need, remaining):
    total = number + need
    left = max(remaining - need, 0) if need <= remaining else 0
    if left < 0:
        left = 0
    return [total, left] if need <= remaining else [total, 0]