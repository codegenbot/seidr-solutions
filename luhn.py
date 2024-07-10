def luhn_check(card):
    card = list(map(int, card.split()))
    result = sum(
        2 * int(digit) if i % 2 else int(digit) for i, digit in enumerate(card)
    )
    return (result // 10 + 1) if result > 9 else result