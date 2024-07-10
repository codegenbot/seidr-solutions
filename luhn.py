def luhn(card):
    card = [int(i) for i in str(card)[1:]]
    total = 0
    for i, x in enumerate(card):
        if i % 2 == 0:
            x *= 2
        if x > 9:
            x -= 9
        total += x
    return total