def luhn(card):
    card = list(map(int, card.split()))
    res = sum(2 * int(digit) if i % 2 else int(digit) for i, digit in enumerate(card))
    return str(res - (res // 10) * 9)