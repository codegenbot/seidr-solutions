def luhn(card):
    card = [int(x) for x in str(card).split()]
    total_sum = sum(
        int(i) if i < 5 else int(i) - 9
        for i in (i * 2 if i % 2 != 0 else i for i in card)
    )
    return total_sum