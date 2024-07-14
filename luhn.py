def luhn(card):
    card = ' '.join(str(x) for x in card.split()).strip()
    card = [int(x) for x in card.split()]
    result = sum(
        int(d) if i % 2 == 0 else (int(d) * 2) % 10 + ((int(d) * 2) // 10)
        for i, d in enumerate(card)
    )
    return str(result) if result % 10 == 0 else 'Invalid'