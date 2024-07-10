def luhn(card):
    sum = 0
    for i, c in enumerate(map(int, card)):
        if (i % 2) == 1:
            c *= 2
            if c > 9:
                c -= 9
        sum += c
    return sum