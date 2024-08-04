def luhn(card):
    card = [int(x) for x in card.split()]
    double_even = [(2 * x) % 10 if i % 2 else x for i, x in enumerate(reversed(card))]
    return sum(sum(divmod(x, 10)) for x in double_even)