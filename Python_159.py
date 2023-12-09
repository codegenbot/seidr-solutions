
def eat(number, need, remaining):
    total = number + need
    left = remaining - (total - number)
    if remaining <= 0:
        left = 0
    return [total, left]