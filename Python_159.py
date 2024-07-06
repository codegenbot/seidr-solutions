
def eat(number, need, remaining):
    total = number + need
    if remaining - need >= 0:
        left = remaining - need
    else:
        left = 0
    return [total, left]