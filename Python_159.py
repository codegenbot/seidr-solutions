def eat(number, need, remaining):
    return [
        number + need - remaining if remaining >= need else number + (need - remaining),
        remaining - max(0, need - remaining),
    ]