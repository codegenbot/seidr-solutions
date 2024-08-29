def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total = 0
    for i, n in enumerate(card_number):
        if i % 2 == 1:
            n *= 2
            if n > 9:
                n -= 9
        total += n
    return total