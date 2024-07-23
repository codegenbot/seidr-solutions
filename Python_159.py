def eat(number, need, remaining):
    return [
        number + max(need - (remaining - number), 0),
        min(remaining, need) - max(need - (remaining - number), 0),
    ]