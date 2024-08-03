def luhn(card):
    card = list(map(int, card.split()))
    result = sum((i % 2) * 2 + (i // 2) for i in range(len(card)))
    return str(result)