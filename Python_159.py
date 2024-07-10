def eat(number, need, remaining):
    if need > remaining:
        return [number, 0]
    else:
        return [number + (need - number), max(0, remaining - (need - number))]