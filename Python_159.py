def eat(number, need, remaining):
    total = number + need
    left = max(remaining - need, 0)
    if need > remaining:
        return [0, 0]
    else:
        return [total, left]