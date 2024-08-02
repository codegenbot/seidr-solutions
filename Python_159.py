def eat(number, need, remaining):
    return [
        number + need - remaining if number + need > remaining else number + remaining,
        remaining - (number + need - remaining) if number + need > remaining else 0,
    ]