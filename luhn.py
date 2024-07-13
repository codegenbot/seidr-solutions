def luhn(card):
    card = [int(x) for x in str(card)[1:]]
    double_even_indexed = [
        (x * 2 if i % 2 else x) - 9 if (x * 2) > 9 else x for i, x in enumerate(card)
    ]
    return sum(double_even_indexed)