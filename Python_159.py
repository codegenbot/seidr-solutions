def eat(number, need, remaining):
    total = number + need
    if total > remaining:
        return [total - remaining, 0]
    elif total <= remaining:
        return [0, remaining]