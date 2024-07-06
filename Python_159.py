def eat(number, need):
    total = number + need
    remaining = max(0, need - number)
    return [total, remaining]