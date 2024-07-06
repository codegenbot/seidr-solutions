
def eat(number, need, remaining):
    total = number + need
    if need <= remaining:
        left = max(remaining - need, 0)
    else:
        left = 0
    return [total, left]