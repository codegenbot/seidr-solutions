def luhn(card_number):
    card_number = list(map(int, card_number.replace(" ", "")))
    result = sum(2 * int(digit) if i % 2 else int(digit) for i, digit in enumerate(card_number))
    return str(result - (result // 10) * 9)