def luhn(card):
    card = [int(x) for x in str(card).split()]
    result = sum(
        2 * int(digit) if i % 2 else int(digit) for i, digit in enumerate(card)
    )
    return (result - (result // 10 * 9)) if result > 9 else result