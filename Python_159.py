def eat(number, need, remaining):
    return [
        number + need - remaining if remaining >= need else number + remaining,
        remaining - (need - remaining) if remaining >= need else 0,
    ]