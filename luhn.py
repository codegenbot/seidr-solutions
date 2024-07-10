```
def luhn(card):
    card = [int(x) for x in str(card)]
    total = 0
    for i, c in enumerate(card):
        if (i % 2 == 1):
            c *= 2
            if c > 9:
                c -= 9
        total += c
    return total