def luhn(card):
    card = list(map(int, card.split()))
    result = sum(
        [i if i < 5 else (i - 9) for i in [x * 2 if i % 2 != 0 else x for x in card]]
    )
    return str(result)