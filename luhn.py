def luhn(card):
    card = list(map(int, card.split()))
    result = sum(2 * d if i % 2 else d for i, d in enumerate(card))[::-1]
    return sum((r // 10) + (r % 10) for r in result)