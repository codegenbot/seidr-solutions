def luhn(card):
    card = [int(x) for x in str(card)]
    result = sum(sum(divmod(d * 2, 10)) + d for i, d in enumerate(card)[1::2])
    return result