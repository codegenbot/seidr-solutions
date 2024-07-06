
def eat(number, need, remaining):
    if need <= remaining:
        total = number + need
        left = max(remaining - need, 0)
    else:
        total = 0
        left = remaining
    return [total, left]