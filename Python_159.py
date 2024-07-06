def eat(number, need, remaining):
    if need > number:
        total = number + need
        left = max(remaining - need, 0)
    else:
        total = number - need
        left = max(remaining + need, 0)
    return [total, left]