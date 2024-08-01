def luhn(card_number):
    card_number = list(map(int, card_number[1:]))
    result = sum(2 * d if i % 2 else d for i, d in enumerate(reversed(card_number)))
    return str(sum((d // 10) + (d % 10) for d in map(int, str(result))))