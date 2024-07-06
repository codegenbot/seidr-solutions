
def eat(number, need):
    total = number + need
    left = max(total - remaining, 0)
    return [total, left]