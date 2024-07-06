def eat(number, need, remaining):
    if number + (remaining - need) < 0:
        return [number, 0]
    else:
        return [number + remaining, 0]