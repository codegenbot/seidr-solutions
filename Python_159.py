def eat(number, need, remaining):
    return [
        number + need - remaining if remaining >= need else number + remaining,
        max(0, remaining - (need - number)),
    ]