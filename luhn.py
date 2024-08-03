def luhn(card):
    card = list(map(int, card.split()))
    result = sum(2 * digit if i % 2 else digit for i, digit in enumerate(card))
    return str(result % 10)