def eat(number, need, remaining):
    return [
        number + max(need - (remaining - number), 0),
        min(max(remaining - (need - number), 0), 1000),
    ]