def luhn(card):
    s = sum(
        int(d) if i % 2 == 0 else 2 * int(d) if 9 > 2 * int(d) else 2 * int(d) - 9
        for i, d in enumerate(reversed(card))
    )
    return str(s)