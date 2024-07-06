
def eat(number, need):
    total = number + need
    if total > 10:
        return [total - 10, 0]
    else:
        return [total, 10 - total]