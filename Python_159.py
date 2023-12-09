
def eat(number, need, remaining):
    if remaining <= 0:
        return [0, 0]
    total = number + need
    left = max(total - remaining, 0)
    return [total, left]