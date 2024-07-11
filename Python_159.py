def eat(number, need, remaining):
    return [
        (number + need - remaining) if (number + need) > remaining else (need),
        (
            (remaining - ((number + need) - remaining))
            if (number + need) > remaining
            else 0
        ),
    ]