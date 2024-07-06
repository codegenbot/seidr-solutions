def eat(number, need, remaining):
    total = number + need
    left = max(remaining - need, 0)
    if need > remaining:
        return [total, 0]
    else:
        return [total, left]