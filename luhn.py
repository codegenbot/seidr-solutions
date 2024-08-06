def luhn(card):
    card = [int(x) for x in str(card)]
    result = sum(
        sum(divmod(d * 2, 10)) + d
        for d in card[::-1]
        if (i := len(card) - i - 1) % 2 == 0
    )
    return result