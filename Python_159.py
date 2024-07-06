def eat(number, need, remaining):
    if need > remaining:
        return number + need, 0
    else:
        return number + need, remaining - need