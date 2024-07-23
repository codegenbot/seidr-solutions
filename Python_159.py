def eat(number, need, remaining):
    return [
        number + need - (remaining if remaining >= need else 0),
        max(0, remaining - (need - (number + need))),
    ]