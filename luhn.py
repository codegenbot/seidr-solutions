def luhn(card_number):
    card_number = list(map(int, str(card_number)))
    card_number.reverse()
    result = sum(
        2 * int(digit) if i % 2 != 0 else int(digit)
        for i, digit in enumerate(card_number)
    )
    return -((result + 1) % 10)