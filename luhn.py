def luhn(card):
    card = [int(x) for x in card.split()]
    result = sum(int(i) if i * 2 <= 9 else int(i) * 2 - 9 for i in card[1::2]) + sum(
        i for i in card[0::2]
    )
    return str(result)