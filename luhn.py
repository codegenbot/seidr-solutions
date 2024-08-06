def luhn(card):
    card = [int(x) for x in str(card)]
    result = sum(
        2 * int(digit) if i % 2 else int(digit) for i, digit in enumerate(card)
    ) - sum(int(str(num)) if num > 9 else num for num in (2 * d for d in card[1::2]))
    return result