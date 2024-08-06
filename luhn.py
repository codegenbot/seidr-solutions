def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    result = sum(
        sum(digit * 2 if i % 2 else digit for i, digit in enumerate(card_number))
        - 9 * (digit > 4 and digit % 10 == 9)
        for digit in card_number
    )
    return result