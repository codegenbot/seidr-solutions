def eat(number, need, remaining):
    total = number + need
    left = max(0, remaining - need)
    return [total, left]