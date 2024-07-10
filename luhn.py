def luhn(card):
    card = [int(x) for x in str(card).split()]
    sum = 0
    for i, n in enumerate(reversed(card)):
        if i % 2 == 1:
            n *= 2 if i % 2 == 0 else n
            if n > 9:
                n -= 9
        sum += n
    return sum