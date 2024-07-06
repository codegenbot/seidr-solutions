def eat(number, need, remaining):
    total = number + need
    left = max(total - remaining, 0)
    return [total, left]