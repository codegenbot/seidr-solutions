def luhn(card):
    card = list(map(int, str(card)))
    result = sum(
        2 * int(digit) if i % 2 else int(digit) for i, digit in enumerate(card)
    ) - sum((int(digit) // 10 + 1) * (int(digit) % 10) for i, digit in enumerate(card))
    return str(result)