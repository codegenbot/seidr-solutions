def eat(number, need):
    total = number + need
    left = max(total - number, 0)
    return [total, left]