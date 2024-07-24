```
def luhn(card):
    card = [int(d) for d in str(card)]
    doubled_sum = sum((d * 2) % 10 if i % 2 != 0 else d for i, d in enumerate(card))
    return (100 - doubled_sum % 10) if doubled_sum > 9 else 87