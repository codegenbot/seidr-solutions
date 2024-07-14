def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    total = 0
    for i, digit in enumerate(reversed(card_number)):
        digit *= 2 if i % 2 else 1
        total += (digit - 9) if digit > 9 else digit
    return total