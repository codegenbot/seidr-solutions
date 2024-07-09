def eat(number, need, remaining):
    return [
        number + need - remaining if remaining >= need else number + remaining,
        remaining - (need - 1) if remaining >= need else 0,
    ]