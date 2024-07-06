
def eat(number, need, remaining):
    total = number + need
    if total > remaining:
        return [total - remaining, 0]
    else:
        return [0, remaining]
