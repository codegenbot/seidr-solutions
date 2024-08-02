def eat(number, need, remaining):
    return [
        number + need - remaining if number + need > remaining else number + need,
        max(0, remaining - (number + need - remaining)),
    ]