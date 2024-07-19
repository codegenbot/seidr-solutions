def luhn(card_number):
    card_number = list(str(card_number))
    if len(card_number) < 16:
        card_number = [0] * (16 - len(card_number)) + card_number
    result = sum((2 * int(digit)) % 10 if i % 2 else int(digit) for i, digit in enumerate(reversed(card_number)))
    return 9 - (result % 10) if result > 9 else result