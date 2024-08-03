def eat(number, need, remaining):
    return [number + min(need - number, remaining), max(0, remaining - (need - number))]