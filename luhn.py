```Python
def luhn(card):
    card = [int(x) for x in str(card)]
    total = 0
    for i, digit in enumerate(card):
        if (i % 2 == 1):
            digit *= 2
            if digit > 9:
                digit -= 9
        total += digit
    return -1 if total % 10 != 0 else 1