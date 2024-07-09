def eat(number, need, remaining):
    total_carrots = number + need
    if total_carrots <= remaining:
        return [total_carrots, remaining - total_carrots]
    else:
        return [remaining + number, 0]