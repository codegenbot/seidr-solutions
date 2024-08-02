def luhn(card):
    card = [int(i) for i in card.split()]
    result = sum(
        int(i) if (i % 2 == 0) else int(i) * 2 if int(i) * 2 > 9 else int(i) * 2 - 9
        for i in card
    )
    return str(result)