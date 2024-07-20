def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    return sum(
        2 * int(digit) if i % 2 and int(digit) * 2 > 9 else 2 * int(digit) - 9 or int(digit) for i, digit in enumerate(card_number)
    ) % 10