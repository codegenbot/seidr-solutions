def luhn(card_number):
    card_number = list(map(int, str(card_number)))
    result = sum(
        2 * int(digit) if i % 2 else int(digit) for i, digit in enumerate(card_number)
    )
    return (result // 10) + ((result % 10) != 0)