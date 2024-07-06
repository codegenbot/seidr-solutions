def eat(number, need, remaining):
    total = max(number, need)
    left = max(0, remaining - need)
    return [total, left]