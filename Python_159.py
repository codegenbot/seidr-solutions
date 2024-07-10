def eat(number, need, remaining):
    return [number + need, max(0, remaining - (need - number)) if need > number else 0]