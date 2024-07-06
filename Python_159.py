def eat(number, need, remaining):
    total = number + need
    left = max(need - remaining, 0)
    return [total, left]