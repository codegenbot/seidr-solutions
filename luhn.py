```
def luhn(card):
    card = [int(x) for x in str(card)[1:]]
    total = 0
    for i, n in enumerate(reversed(card)):
        if i % 2 == 0:
            n *= 2
            if n > 9:
                n -= 9
        total += n
    return total