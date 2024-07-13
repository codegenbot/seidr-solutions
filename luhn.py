def luhn(card_number):
    card_number = [int(x) for x in str(card_number)]
    result = sum(
        [2 * int(digit) if i % 2 else int(digit) for i, digit in enumerate(reversed(card_number))]
    )
    return sum([int(d) // 10 + int(d) % 10 for d in str(result)]) % 10