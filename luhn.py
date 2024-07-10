def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    card_number = card_number[::-1]
    total = 0
    for i, v in enumerate(card_number):
        if i % 2 == 1:
            v *= 2
            if v > 9:
                v -= 9
        total += v
    return 10 - (total % 10) if total % 10 != 0 else 0