
def eat(number, need, remaining):
    total = number + need
    if need > remaining:
        left = 0
    elif need <= remaining:
        left = max(remaining - need, 0)
    else:
        left = need - remaining
    return [total, left]