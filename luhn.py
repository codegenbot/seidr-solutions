def luhn(card_number):
    card_number = list(map(int, card_number))
    result = sum(
        2 * int(digit) if i % 2 != 0 else int(digit)
        for i, digit in enumerate(card_number)
    )
    return str(result - (result // 10) * 9)