
def eat(need, number, remaining):
    total = need + number
    if need > remaining:
        left = 0
    else:
        left = max(remaining - need, 0)
    return [total, left]