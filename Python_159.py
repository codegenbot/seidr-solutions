def eat(number, need, remaining):
    return [
        number + need - remaining if remaining >= need else number + remaining,
        remaining - max(0, need - (number + remaining)),
    ]