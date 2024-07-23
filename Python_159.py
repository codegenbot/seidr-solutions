def eat(number, need, remaining):
    return [
        (number + max(need - (remaining - number), 0)),
        min(max(need, number + remaining), 1000)
        - (number + max(need - (remaining - number), 0)),
    ]