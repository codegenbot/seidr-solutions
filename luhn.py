def luhn(card_number):
    card_number = [int(x) for x in str(card_number)[1:]]
    result = sum(
        2 * int(digit) if i % 2 != 0 else int(digit)
        for i, digit in enumerate(card_number)
    )
    return (result // 10) + ((result % 10) + 9) % 10