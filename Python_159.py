def eat(number, need, remaining):
    return [
        (
            (number + max(0, need - (remaining - number)))
            if remaining >= number
            else (number + need)
        ),
        min(remaining, number + need) - (number + max(0, need - (remaining - number))),
    ]