def eat(number, need, remaining):
    return [number + max(need - (remaining - number), 0), max(0, remaining - number)]