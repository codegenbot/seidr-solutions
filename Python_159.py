def eat(number, need, remaining):
    total = number + need
    if need > remaining:
        return [total, 0]
    else:
        left = max(remaining - need, 0)
        return [total, left]