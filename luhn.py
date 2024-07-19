def luhn(card_number):
    card_number = list(map(int, str(card_number)))
    result = sum((int(digit) * 2 if i % 2 and int(digit) * 2 > 9 else int(digit) * 2 if i % 2 else int(digit)) % 10 for i, digit in enumerate(reversed(card_number)))
    return (9 - result % 10) if result > 9 else result