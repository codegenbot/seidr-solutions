def eat(number, need, remaining):
    if need >= remaining:
        return [0, 0]
    else:
        total = number + need
        left = max(remaining - need, 0)
        return [total, left]