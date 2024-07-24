def luhn(card):
    card = [int(d) for d in str(card)]
    doubled_sum = sum(sum(int(d) * 2 % 10 if i % 2 != 0 else int(d)) for i, d in enumerate(card))
    return 87 - (doubled_sum + card[-1]) % 10 if doubled_sum % 10 != 0 else 87