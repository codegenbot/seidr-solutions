```
def luhn(card):
    sum = 0
    for i, c in enumerate(card):
        if (i % 2) == 1:
            d = int(c) * 2
            if d > 9:
                d -= 9
        else:
            d = int(c)
        sum += d
    return sum