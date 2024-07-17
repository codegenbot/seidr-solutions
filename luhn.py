def luhn(card):
    total = 0
    for i, x in enumerate(reversed(card)):
        if i % 2 == 1 and int(x) * 2 > 9:
            total += int(x) * 2 - 9
        elif i % 2 == 1:
            total += int(x)
        else:
            total += int(x)
    return total