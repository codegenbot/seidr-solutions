def luhn(card):
    card = [int(d) for d in str(card).replace(" ", "")]
    doubled_sum = sum((d * 2) % 10 if i % 2 != 0 else d for i, d in enumerate(card))
    return (
        (doubled_sum + card[-1]) % 10
        if doubled_sum % 2 == 0
        else 8 - (doubled_sum + card[-1]) % 9
    )