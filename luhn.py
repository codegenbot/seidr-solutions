def luhn(card_number):
    card_number = [int(x) for x in str(card_number).split()]
    result = sum(
        2 * int(digit) if i % 2 != 0 else int(digit)
        for i, digit in enumerate(card_number)
    )
    return (result // 10) + ((result % 10) == 0 and 1 or 0)