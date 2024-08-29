def luhn(card):
    card = list(map(int, card.split()))
    result = sum(
        2 * int(digit) if i % 2 != 0 else int(digit) for i, digit in enumerate(card)
    )
    return str(result - (result // 10) * 9)