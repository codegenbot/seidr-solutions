def eat(number, need, remaining):
    return [
        number + need - remaining if number < need else number + remaining,
        min(need, remaining),
    ]