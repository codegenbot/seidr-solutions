```
def luhn(card):
    card = [int(x) for x in str(card)]
    card.reverse()
    total = 0
    for i, digit in enumerate(card):
        if i % 2 == 1:
            total += (digit * 2) % 10 if (digit * 2) > 9 else digit * 2
        else:
            total += digit
    return -1 if total % 10 != 0 else 1