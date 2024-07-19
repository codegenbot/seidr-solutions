def luhn(card_number):
    card_number = list(map(int, str(card_number)[1:][:-1]))
    result = sum((2 * int(digit)) % 10 if i % 2 else int(digit) for i, digit in enumerate(reversed(card_number)))
    return 9 - (result % 10) if result > 9 else result