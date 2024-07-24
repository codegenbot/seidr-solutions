def luhn(card):
    card = [int(d) for d in str(card)]
    doubled_sum = sum(
        (
            1
            if i % 2 == 0
            else int(d) * 2 % 10 if (int(d) * 2) // 10 > 0 else int(d) * 2 % 10
        )
        for i, d in enumerate(card[:-1])
    )
    return (doubled_sum + card[-1]) % 10