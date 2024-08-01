def luhn(card_number):
    card_number = [int(x) for x in card_number.split()]
    result = sum(
        sum(digit * 2 for digit in card_number[1::2]) if i % 2 != 0 else [digit]
        for i, digit in enumerate(card_number)
    )
    return str(result % 10)