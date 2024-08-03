def luhn(card):
    card = list(map(int, card.split()))
    result = sum(
        (i % 2) * (10 - i // 2) if i % 2 else card[i] for i in range(len(card))
    )
    return result