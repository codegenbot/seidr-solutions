def luhn(card):
    card = [int(x) for x in ' ' + str(card).replace(' ', '')[1:-1] + ' '].split()
    card.reverse()
    total = 0
    for i, digit in enumerate(card):
        if i % 2 == 0:
            total += digit
        else:
            total += (digit * 2) // 10 + (digit * 2) % 10
    return -1 if total % 10 != 0 else 1