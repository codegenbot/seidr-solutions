def eat(number, need, remaining):
    return [number + need - remaining if remaining >= need else number + (need - (1000 - remaining)), min(remaining - need, 1000 - number)]